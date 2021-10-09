class Student:
    def __init__(self, first_name, second_name, grade):
        self.first_name = first_name
        self.second_name = second_name
        self.grade = grade

    def to_dict(self):
        student_dict = {"first name": self.first_name,
                        "second name": self.second_name,
                        "grade": self.grade}
        return student_dict

