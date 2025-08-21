#include "schedule.h"
#include <iostream>
#include <algorithm>
using namespace std;

void Schedule::add(const Event &e) {
    events.push_back(e);
}

vector<Event> Schedule::all() const {
    return events;
}

void Schedule::show() const {
    for (auto &e : events) {
        cout << e.date << " " << e.start << "-" << e.end
             << " | " << e.type << " | " << e.name << "\n";
    }
}

Schedule Schedule::operator+(const Schedule &other) const {
    Schedule result;
    result.events = events;
    result.events.insert(result.events.end(),
                         other.events.begin(),
                         other.events.end());
    return result;
}

void Schedule::sortByTime() {
    sort(events.begin(), events.end(),
         [](const Event &a, const Event &b) {
             return a.start < b.start;
         });
}
