#include <bits/stdc++.h>

using namespace std;

int switchCount;
int studentCount;
int switches[101];


void maleSwitch(int switchIndex) {
    int sum = switchIndex;
    for (int i = switchIndex; i <= switchCount; i += sum) {
        switches[i] = !switches[i];

    }
}

void femaleSwitch(int switchIndex) {

    int right = switchIndex + 1;
    int left = switchIndex - 1;
    int matchCnt = 0;

    while (true) {
        if (switches[left] == switches[right] && (left > 0 && right <= switchCount)) {
            matchCnt++;
            right++;
            left--;
        } else {
            break;
        }


    }
//    cout << left << " " << right << "\n";

//    cout << switches[left] << " " << switches[right] << " " << left << " " << right << " " << matchCnt << "\n";



    switches[switchIndex] = !switches[switchIndex];

    for (int i = 1; i <= matchCnt; i++) {
        switches[switchIndex + i] = !switches[switchIndex + i];
        switches[switchIndex - i] = !switches[switchIndex - i];
    }


}


int main() {

    cin >> switchCount;

    for (int i = 1; i <= switchCount; i++) {
        cin >> switches[i];
    }

    cin >> studentCount;

    for (int i = 0; i < studentCount; i++) {
        int studentGender = 0;
        int switchIndex = 0;
        cin >> studentGender;
        cin >> switchIndex;


        if (studentGender == 1) {
            maleSwitch(switchIndex);
        }

        if (studentGender == 2) {
            femaleSwitch(switchIndex);
        }

        for (int i = 1; i <= switchCount; i++) {
//            cout << switches[i] << " ";
        }

    }

//    cout << "\n";
//    cout << "\n";

    for (int i = 1; i <= switchCount; i++) {
        cout << switches[i] << " ";

        if(i%20==0){
            cout << "\n";
        }

    }


}





