using namespace std;

Class Lesson {
    string lesson_name;
    string teacher_name;
    Lesson (string l, string t) {lesson_name = l; teacher_name = t;}
};
// Прсосто указание урока и имени учителя для последующей обработки

Class Week {
    Lesson monday[10];
    Lesson tuesday[10];
    Lesson wednesday[10];
    Lesson thursday[10];
    Lesson friday[10];
    Lesson saturday[10];
    Week (Lesson mon[10], Lesson tue[10], Lesson wed[10], Lesson thu[10], Lesson fri[10], Lesson sat[10])
        {monday = mon; tuesday = tue; wednesday = wed; thursday = thu; friday = fri; saturday = sat;}
};
// Работаем уже с рссписанием. Расписание для одново класса на неделю. Все рассписание предлагается хранить как массив Week для всех классов
