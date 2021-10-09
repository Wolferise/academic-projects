import pytest as pt
from script_to_test import Student


def dict_test():
    assert Student("Ilya", "Burenkov", "3").to_dict() == {"first name": "Ilya",
                                                          "second name": "Burenkov",
                                                          "grade": "3"}

if __name__ == "__main__":
    dict_test()