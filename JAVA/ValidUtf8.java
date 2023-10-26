public boolean validUtf8(int[] data) {

    int rmbs = 0;

    for(int val: data) {
        if(rmbs == 0) {
            if((val>>7) == 0b0) {
            rmbs = 0;
            } else if((val>>5) == 0b110) {
                rmbs = 1;
            } else if((val>>4) == 0b1110) {
                rmbs = 2;
            } else if((val>>3) == 0b11110) {
                rmbs = 3;
            } else {
                return false;
            }
        } else {
            if((val>>6) == 0b10) {
                rmbs --;
            } else {
                return false;
            }
        }
    }        

    if(rmbs == 0) {
        return true;
    } else {
        return false;
    }

}
