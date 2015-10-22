//
// Created by andresokol on 12.10.2015.
//

#include <string>
#include <map>
#include <vector>

#ifndef INT_SCHEDULE_STRUCTURES_H
#define INT_SCHEDULE_STRUCTURES_H

class Teacher {
public:
    std::string teacher_name_;
    int work_hours_[6][2];                 // start & end of work hours, first and last lesson available
    Teacher(){}
    void set_name(const std::string &teacher_name) {
        teacher_name_ = teacher_name;
    }
    void set_work_time(const int &day, const int &work_start, const int &work_end) {
        work_hours_[day][0] = work_start;
        work_hours_[day][1] = work_end;
    }
};

class Lesson {
public:
    std::string lesson_name_;
    Teacher* teacher_;
    Lesson(){};
    Lesson(std::string a, Teacher* b)
    {
        lesson_name_ = a;
        teacher_ = b;
    };
};

// collapse students with same schedule into single object
class StudentGroup {
public:
    int size_;
    int grade_;                                            // they re in same grade, obvious
    std::vector<std::string> students_in_group_;
    std::map<Lesson*, int> study_plan_;                    // study plan, pairs (lesson - how many hours per week)
    StudentGroup(){};
};

#endif //INT_SCHEDULE_STRUCTURES_H