int romanToInt(char s[]) {
        int c = s.length(),i=0,n=0;
        char l='a',r='a';
        while(i < c){
            l = s[i];
            if(i == c-1)
                r = 'a';
            else
                r = s[i+1];
            if(l == 'I'){
                if(r == 'V'){
                    n += 4;
                    i += 2;
                }
                else if(r == 'X'){
                    n += 9;
                    i += 2;
                }
                else{
                    n++;
                    i++;
                }
            }
            else if(l == 'V'){
                n += 5;
                i++;
            }
            else if(l == 'X'){
                if(r == 'L'){
                    n += 40;
                    i += 2;
                } else if(r == 'C'){
                    n += 90;
                    i += 2;
                } else {
                    n += 10;
                    i++;
                }
            }
            else if(l == 'L'){
                n += 50;
                i++;
            }
            else if(l == 'C'){
                if(r == 'D'){
                    n += 400;
                    i += 2;
                }
                else if(r == 'M'){
                    n += 900;
                    i += 2;
                }
                else {
                    n += 100;
                    i++;
                }
            }
            else if(l == 'D'){
                n += 500;
                i++;
            }
            else if(l == 'M'){
                n += 1000;
                i++;
            }
            
        }
        return n;
    }
