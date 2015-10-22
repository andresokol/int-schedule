//
// Created by andresokol on 22.10.2015.
//

#include "header.h"
#include "input.h"

#define TEACHERS_LIST_FILENAME "specs.md"

using namespace std;

bool get_teacher_from_file(std::vector<Teacher> &teachers)
{
    FILE * pTeachersFile = freopen(TEACHERS_LIST_FILENAME, "r", stdin);
    string teacher_name;
    int work_start, work_end;
    int iterator = 0;
    while (!feof(pTeachersFile))
    {
        cerr << "LOL" << endl;

        scanf("%s", &teacher_name);
        Teacher teacher_to_add;
        teacher_to_add.set_name(teacher_name);


        for (int i = 0; i < 6; ++i) {
            scanf("%i %i", &work_start, &work_end);
            if (work_start > 15 || work_end > 15 || work_start < 0 || work_end < 0)
            {
                cerr << "Error in working hours at teacher " << teacher_name << endl;
                return false;
            }
            teacher_to_add.set_work_time(i, work_start, work_end);
        }

        teachers.push_back(teacher_to_add);

        iterator++;
    }

    cerr << "Successfully read " << iterator << "teachers from teacher's list" << endl;
    return true;
}