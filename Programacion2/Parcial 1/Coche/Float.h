//
// Created by memop on 12/04/2024.
//

#ifndef HERENCIA_FLOAT_H
#define HERENCIA_FLOAT_H


class Float {

};
class FloatCell {

        public:

        FloatCell();//Default constructor
        FloatCell(const FloatCell &floatcell);// Copy constructor
        FloatCell(float value);//Parameters constructor
        ~FloatCell() = default;//Destructor

        FloatCell &operator= (const FloatCell &rhs);
        FloatCell &operator= (float i);

        FloatCell &operator+ (const FloatCell &rhs);
        FloatCell &operator+ (float i);

        FloatCell &operator- (const FloatCell &rhs);
        FloatCell &operator- (float i);

        FloatCell &operator* (FloatCell &rhs);
        FloatCell &operator* (float i);

        FloatCell &operator/ (FloatCell &rhs);
        FloatCell &operator/ (float i);

        FloatCell &operator% (FloatCell &rhs);
        FloatCell &operator% (float i);


        private:

        float value;

};


#endif //HERENCIA_FLOAT_H
