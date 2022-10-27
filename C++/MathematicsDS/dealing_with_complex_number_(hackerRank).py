# For this challenge, you are given two complex numbers, and you have to print the result of their addition, subtraction, multiplication, division and modulus operations.
# PROBLEM URL: https://www.hackerrank.com/challenges/class-1-dealing-with-complex-numbers/problem


class Complex(object):

    def __init__(self, real, imaginary):
        self.real = real
        self.imaginary = imaginary

    @staticmethod
    def roundOff(number):
        return Complex(number.real, number.imaginary)

    def __add__(self, no):
        num = complex(self.real, self.imaginary) + complex(no.real, no.imaginary)
        return Complex.roundOff(Complex(num.real, num.imag))

    def __sub__(self, no):
        num = complex(self.real, self.imaginary) - complex(no.real, no.imaginary)
        return Complex.roundOff(Complex(num.real, num.imag))

    def __mul__(self, no):
        num = complex(self.real, self.imaginary) * complex(no.real, no.imaginary)
        return Complex.roundOff(Complex(num.real, num.imag))

    def __truediv__(self, no):
        num = complex(self.real, self.imaginary) / complex(no.real, no.imaginary)
        return Complex.roundOff(Complex(num.real, num.imag))

    def mod(self):
        num = abs(complex(self.real, self.imaginary))
        return Complex.roundOff(Complex(num, 0))

    def __str__(self):
        if self.imaginary == 0:
            result = "%.2f+0.00i" % (self.real)
        elif self.real == 0:
            if self.imaginary >= 0:
                result = "0.00+%.2fi" % (self.imaginary)
            else:
                result = "0.00-%.2fi" % (abs(self.imaginary))
        elif self.imaginary > 0:
            result = "%.2f+%.2fi" % (self.real, self.imaginary)
        else:
            result = "%.2f-%.2fi" % (self.real, abs(self.imaginary))
        return result


if __name__ == '__main__':
    c = map(float, input().split())
    d = map(float, input().split())
    x = Complex(*c)
    y = Complex(*d)
    print(*map(str, [x + y, x - y, x * y, x / y, x.mod(), y.mod()]), sep='\n')