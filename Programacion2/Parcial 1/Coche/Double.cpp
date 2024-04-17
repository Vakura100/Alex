#include <cmath>
#include "Double.h"

Double::Double() {
    value = 0;
}

Double::Double(double value) {
    this->value = value;
}

Double::Double(const Double &rhs) {
    value = rhs.value;
}

Double &Double::operator=(const Double &rhs) {
    if (this != &rhs) {
        value = rhs.value;
    }
    return *this;
}

Double &Double::operator=(double i) {
    value = i;
    return *this;
}

Double &Double::operator+(const Double &rhs) {
    value += rhs.value;
    return *this;
}

Double &Double::operator+(double i) {
    value += i;
    return *this;
}

Double &Double::operator-(const Double &rhs) {
    value -= rhs.value;
    return *this;
}

Double &Double::operator-(double i) {
    value -= i;
    return *this;
}

Double &Double::operator*(const Double &rhs) {
    value *= rhs.value;
    return *this;
}

Double &Double::operator*(double i) {
    value *= i;
    return *this;
}

Double &Double::operator/(const Double &rhs) {
    if (rhs.value != 0) {
        value /= rhs.value;
    } else {
        // Manejo de división por cero
        value = 0;
    }
    return *this;
}

Double &Double::operator/(double i) {
    if (i != 0) {
        value /= i;
    } else {
        // Manejo de división por cero
        value = 0;
    }
    return *this;
}

Double &Double::operator%(const Double &rhs) {
    if (rhs.value != 0) {
        value = fmod(value, rhs.value);
    } else {
        // Manejo de división por cero
        value = 0;
    }
    return *this;
}

Double &Double::operator%(double i) {
    if (i != 0) {
        value = fmod(value, i);
    } else {
        // Manejo de división por cero
        value = 0;
    }
    return *this;
}

bool Double::operator>(const Double &rhs) const {
    return value > rhs.value;
}

bool Double::operator>(double i) const {
    return value > i;
}

bool Double::operator<(const Double &rhs) const {
    return value < rhs.value;
}

bool Double::operator<(double i) const {
    return value < i;
}

bool Double::operator==(const Double &rhs) const {
    return value == rhs.value;
}

bool Double::operator==(double i) const {
    return value == i;
}

bool Double::operator>=(const Double &rhs) const {
    return value >= rhs.value;
}

bool Double::operator>=(double i) const {
    return value >= i;
}

bool Double::operator<=(const Double &rhs) const {
    return value <= rhs.value;
}

bool Double::operator<=(double i) const {
    return value <= i;
}

bool Double::operator!=(const Double &rhs) const {
    return value != rhs.value;
}

bool Double::operator!=(double i) const {
    return value != i;
}