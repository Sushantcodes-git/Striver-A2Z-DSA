class Solution {
public:
    void studentGrade(int x) {

        if (x>=95 && x<=100) {
            cout<<"Grade A";
        }
        else if (x>=70 && x<95) {
            cout<<"Grade B";
        }
        else if (x>=50 && x<70) {
            cout<<"Grade C";
        }
        else if (x>=35 && x<50) {
            cout<<"Grade D";
        }
        else {
            cout<<"Fail";
        }

    }
};