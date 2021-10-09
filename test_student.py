import pytest as pt
from script_to_test import Student


def test_dict():
    assert Student("Ilya", "Burenkov", "3").to_dict() == {"first name": "Ilya",
                                                          "second name": "Burenkov",
                                                          "grade": "3"}


def test_sample():
    assert True


def test_sample2():
    assert False
