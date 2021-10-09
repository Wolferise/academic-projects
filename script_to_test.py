class Student:
    def __init__(self, first_name, second_name, grade):
        if first_name == "":
            self.first_name = "not specified"
        else:
            self.first_name = first_name
        if second_name == "":
            self.second_name = "not specified"
        else:
            self.second_name = second_name
        if grade == "" or int(grade) > 6:
            self.grade = "not specified"
        else:
            self.grade = grade

    def to_dict(self):
        student_dict = {"first name": self.first_name,
                        "second name": self.second_name,
                        "grade": self.grade}
        return student_dict

