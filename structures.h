//
// Created by andresokol on 12.10.2015.
//

#include <string>
#include <vector>
#include <map>

#ifndef INT_SCHEDULE_STRUCTURES_H
#define INT_SCHEDULE_STRUCTURES_H

class Teacher {
public:
    std::string teacher_name_;
    int work_hours_[6][2];                 // start & end of work hours, first and last lesson available
    Teacher(){};
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

class

#endif //INT_SCHEDULE_STRUCTURES_H