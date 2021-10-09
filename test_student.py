import pytest as pt
from script_to_test import Student


def test_to_dict():
    assert Student("Ilya", "Burenkov", "3").to_dict() == {"first name": "Ilya",
                                                          "second name": "Burenkov",
                                                          "grade": "3"}


def test_empty_fields():
    assert Student("", "", "").to_dict() == {"first name": "not specified",
                                             "second name": "not specified",
                                             "grade": "not specified"}


def test_inappropriate_grade():
    assert Student("Ilya", "Burenkov", "7").to_dict() == {"first name": "Ilya",
                                                          "second name": "Burenkov",
                                                          "grade": "not specified"}