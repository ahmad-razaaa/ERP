#include <iostream>
using namespace std;

void student1(){
    cout<<endl;
    cout<<"        Personal Information:\n";
    cout<<"                            Ahmad Raza\n";
    cout<<"                            Section: 1-D\n";
    cout<<"                            Semester: 2\n";
    cout<<"                            Faculty of Computer Science\n";

    int select;
    do{
    int n;
    cout<<"Select:\n";
    cout<<"       1.Dues Pending\n";
    cout<<"       2.Attendance\n";
    cout<<"       3.Result card\n";
    cout<<endl;
    cin>>n;
    system("cls");

    if(n==1){
    cout<<"       Due Pending: 0\n";
    }
    else if(n==2){
             cout<<endl;
             cout<<"  English: 95.00%\n";
             cout<<"  Physics: 91.00%\n";
             cout<<"  Programming Fundamentals: 95.00%\n";
             cout<<"  Intro to Logic: 98.00%\n";
             cout<<"  Ict: 87.00%\n";
             cout<<"  PF(lab): 100.00%\n";
             cout<<"  Ict(lab): 100.00%\n";
    }
    else if(n==3){
    int choice;
    do{
    int m;
    cout<<"Select subject: \n";
    cout<<"               1.Physics\n";
    cout<<"               2.ICT\n";
    cout<<"               3.English\n";
    cout<<"               4.ITL\n";
    cout<<"               5.PF\n";
    cout<<"               6.PF Lab\n";
    cout<<"               7.ICT Lab\n";
    cin>>m;
    cout<<endl;
    if(m==1){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        9.00               90.00\n";
    cout<<"Quiz             20.00        18.00              90.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        36.00              90.00\n";
    cout<<endl;
}

    else if(m==2){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        8.00               80.00\n";
    cout<<"Quiz             20.00        18.00              90.00\n";
    cout<<"Mid Term         20.00        15.50              87.50\n";
    cout<<"Presentation     10.00        7.00               80.00\n";
    cout<<"Final Term       40.00        34.00              90.00\n";
    cout<<endl;
    }

    else if(m==3){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        8.00               90.00\n";
    cout<<"Quiz             20.00        17.00              80.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        35.00              90.00\n";
    cout<<endl;
    }

    else if(m==4){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        9.00               90.00\n";
    cout<<"Quiz             20.00        17.00              80.00\n";
    cout<<"Mid Term         20.00        18.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        37.00              90.00\n";
    cout<<endl;
    }

    else if(m==5){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        8.50               90.00\n";
    cout<<"Quiz             20.00        15.00              80.00\n";
    cout<<"Mid Term         20.00        19.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        38.00              90.00\n";
    cout<<endl;
    }

    else if(m==6){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       20.00        18.00              90.00\n";
    cout<<"Lab Task         10.00        9.00               80.00\n";
    cout<<"Viva             30.00        26.50              88.33\n";
    cout<<"Final Term       40.00        34.00              90.00\n";
    cout<<endl;
    }

    else if(m==7){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       20.00        18.00              90.00\n";
    cout<<"Viva             30.00        25.00              80.00\n";
    cout<<"Lab Task         10.00        9.50              88.33\n";
    cout<<"Final Term       40.00        35.00              90.00\n";
    cout<<endl;
    }
    else{
    cout<<"Invalid Choice!\n";
    }

    cout << "Check result of another subject [ 1.yes / 2.no ] ";
    cin >> choice;
    system("cls");
    } while (choice == 1 );
}

    else{
    cout<<"Invalid Choice!\n";
    }
    cout<<endl;
    cout<<"                    Main menu[1.yes/2.no]: ";
    cin>>select;
}
    while(select==1);
}

void student2(){
        cout<<"Personal Information:\n";
        cout<<"                    M.Talha\n";
        cout<<"                    Section: 1-D\n";
        cout<<"                    Semester: 2\n";
        cout<<"                    Faculty of Computer Science\n";
               
        int select;
        do{
        int n;
        cout<<"Select:\n";
        cout<<"       1.Dues Pending\n";
        cout<<"       2.Attendance\n";
        cout<<"       3.Result card\n";
        cin>>n;
        system("cls");

        if(n==1){
             cout<<"      Due Pending: 0\n";
        }

        else if(n==2){
             cout<<endl;
             cout<<"  English: 94.00%\n";
             cout<<"  Physics: 92.00%\n";
             cout<<"  Programming Fundamentals: 88.00%\n";
             cout<<"  Intro to Logic: 93.00%\n";
             cout<<"  ICT: 100.00%\n";
             cout<<"  PF(lab): 90.00%\n";
             cout<<"  ICT(lab): 89.00%\n";
            }

        else if(n=3){
         int choice;
        do{
        int m;
        cout<<"Select subject: \n";
        cout<<"               1.Physics\n";
        cout<<"               2.ICT\n";
        cout<<"               3.English\n";
        cout<<"               4.ITL\n";
        cout<<"               5.PF\n";
        cout<<"               6.PF Lab\n";
        cout<<"               7.ICT Lab\n";
        cin>>m;
    if(m==1){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        8.00               80.00\n";
    cout<<"Quiz             20.00        16.00              80.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        7.00               70.00\n";
    cout<<"Final Term       40.00        35.00              88.00\n";
    }

    else if(m==2){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        8.50               850.00\n";
    cout<<"Quiz             20.00        14.00              70.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        34.00              85.00\n";
    }

    else if(m==3){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        9.00               90.00\n";
    cout<<"Quiz             20.00        15.00              75.00\n";
    cout<<"Mid Term         20.00        16.50              85.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        30.00              65.00\n";
    }


    else if(m==4){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        10.00              100.00\n";
    cout<<"Quiz             20.00        18.00              90.00\n";
    cout<<"Mid Term         20.00        18.50              92.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        34.00              80.00\n";
    }


    else if(m==5){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        9.00               90.00\n";
    cout<<"Quiz             20.00        32.00              80.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        9.00               90.00\n";
    cout<<"Final Term       40.00        32.00              80.00\n";
    }


    else if(m==6){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       20.00        18.00              90.00\n";
    cout<<"Lab Task         10.00        8.00               80.00\n";
    cout<<"Viva             30.00        26.50              88.33\n";
    cout<<"Final Term       40.00        38.00              95.00\n";
    }

    else if(m==7){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       20.00        16.00              80.00\n";
    cout<<"Viva             30.00        26.00              82.00\n";
    cout<<"Lab Task         10.00        8.50               85.50\n";
    cout<<"Final Term       40.00        36.00              90.00\n";
    }
    else{
    cout<<"Invalid Choice!";
    }
    cout<<endl;
    cout << "Check result of another subject [ 1.yes / 2.no ] ";
        cin >> choice;
    } while (choice == 1 );
}
    else{
    cout<<"Invalid Choice!";
    }
    cout<<endl;
    cout<<"                    Main menu[1.yes/2.no]:\n ";
    cin>>select;
}
    while(select==1);
}

    void student3(){
              cout<<"Personal Information:\n";
              cout<<"                    Abubakar Aleem\n";
              cout<<"                    Section: 1-D\n";
              cout<<"                    Semester: 2\n";
              cout<<"                    Faculty of Computer Science\n";
               
               int select;
               do{
               int n;
               cout<<"Select:\n";
               cout<<"       1.Dues Pending\n";
               cout<<"       2.Attendance\n";
               cout<<"       3.Result card\n";
               cin>>n;
               system("cls");

if(n==1){
    cout<<"     Due Pending: 0\n";
}

else if(n==2){
             cout<<endl;
             cout<<"  English: 91.00%\n";
             cout<<"  Physics: 87.00%\n";
             cout<<"  Programming Fundamentals: 92.00%\n";
             cout<<"  Intro to Logic: 85.00%\n";
             cout<<"  ICT: 95.00%\n";
             cout<<"  PF(lab): 93.00%\n";
             cout<<"  ICT(lab): 100.00%\n";
}

else if(n=3){
    int choice;
    do{
    int m;
    cout<<"Select subject: \n";
    cout<<"               1.Physics\n";
    cout<<"               2.ICT\n";
    cout<<"               3.English\n";
    cout<<"               4.ITL\n";
    cout<<"               5.PF\n";
    cout<<"               6.PF Lab\n";
    cout<<"               7.ICT Lab\n";
    cin>>m;
    cout<<endl;
    if(m==1){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        8.00               80.00\n";
    cout<<"Quiz             20.00        15.00              75.50\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        38.00              94.00\n";
}

else if(m==2){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        9.50               95.00\n";
    cout<<"Quiz             20.00        16.00              80.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        40.00              100.00\n";

}

else if(m==3){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        8.00               80.00\n";
    cout<<"Quiz             20.00        16.00              80.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        9.00               90.00\n";
    cout<<"Final Term       40.00        34.00              86.00\n";
}

else if(m==4){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        9.00               90.00\n";
    cout<<"Quiz             20.00        16.00              80.00\n";
    cout<<"Mid Term         20.00        17.00              85.00\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        36.00              90.00\n";
}

else if(m==5){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        9.00               90.00\n";
    cout<<"Quiz             20.00        16.00              80.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        30.00              80.00\n";
}


else if(m==6){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       20.00        18.00              90.00\n";
    cout<<"Lab Task         10.00        8.00               80.00\n";
    cout<<"Viva             30.00        26.50              88.33\n";
    cout<<"Final Term       40.00        34.00              84.00\n";
}


else if(m==7){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       20.00        18.00              90.00\n";
    cout<<"Viva             30.00        25.00              80.00\n";
    cout<<"Lab Task         10.00        8.50               85.00\n";
    cout<<"Final Term       40.00        36.00              90.00\n";
}
else{
    cout<<"Invalid Choice!";
}
 cout<<endl;
 cout << "Check result of another subject [ 1.yes / 2.no ] ";
        cin >> choice;
    } while (choice == 1 );
}
else{
    cout<<"Invalid Choice!";
}cout<<endl;
cout<<"                    Main menu[1.yes/2.no]:\n ";
cin>>select;
}
while(select==1);
}

void student4(){
               cout<<"Personal Information:\n";
               cout<<"                    Noman Fazal\n";
               cout<<"                    Section: 1-D\n";
               cout<<"                    Semester: 2\n";
               cout<<"                    Faculty of Computer Science\n";
               
               int select;
               do{
               int n;
               cout<<"Select:\n";
               cout<<"       1.Dues Pending\n";
               cout<<"       2.Attendance\n";
               cout<<"       3.Result card\n";
               cin>>n;
               system("cls");

if(n==1){
    cout<<"     Due Pending: 0\n";
}

else if(n==2){
             cout<<"  English: 93.00%\n";
             cout<<"  Physics: 90.00%\n";
             cout<<"  Programming Fundamentals: 95.00%\n";
             cout<<"  Intro to Logic: 98.00%\n";
             cout<<"  ICT: 100.00%\n";
             cout<<"  PF(lab): 84.00%\n";
             cout<<"  ICT(lab): 93.00%\n";
            }

else if(n=3){
    int choice;
    do{
    int m;
    cout<<"Select subject: \n";
    cout<<"               1.Physics\n";
    cout<<"               2.ICT\n";
    cout<<"               3.English\n";
    cout<<"               4.ITL\n";
    cout<<"               5.PF\n";
    cout<<"               6.PF Lab\n";
    cout<<"               7.ICT Lab\n";
    cin>>m;
    if(m==1){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        9.00               90.00\n";
    cout<<"Quiz             20.00        16.00              80.00\n";
    cout<<"Mid Term         20.00        17.00              85.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        38.00              95.00\n";
}

else if(m==2){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        9.00               90.00\n";
    cout<<"Quiz             20.00        16.00              80.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        36.00              90.00\n";

}

else if(m==3){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        9.00               90.00\n";
    cout<<"Quiz             20.00        20.00              100.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        36.00              90.00\n";
}


else if(m==4){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        9.00               90.00\n";
    cout<<"Quiz             20.00        15.00              75.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        34.00              88.00\n";
}

else if(m==5){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        9.00               90.00\n";
    cout<<"Quiz             20.00        18.00              95.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        30.00              80.00\n";
}

else if(m==6){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       20.00        18.00              90.00\n";
    cout<<"Lab Task         10.00        8.00               80.00\n";
    cout<<"Viva             30.00        26.50              88.33\n";
    cout<<"Final Term       40.00        36.00              90.00\n";
}

else if(m==7){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       20.00        17.00              88.00\n";
    cout<<"Viva             30.00        26.00              80.00\n";
    cout<<"Lab Task         10.00        26.50              88.33\n";
    cout<<"Final Term       40.00        36.00              90.00\n";
}
else{
    cout<<"Invalid Choice!";
}
 cout<<endl;
 cout << "Check result of another subject [ 1.yes / 2.no ] ";
        cin >> choice;
    } while (choice == 1 );
}
else{
    cout<<"Invalid Choice!";
}cout<<endl;
cout<<"                    Main menu[1.yes/2.no]:\n ";
cin>>select;
}
while(select==1);
}

void student5(){
               cout<<"Personal Information:\n";
               cout<<"                    M.Tauseef\n";
               cout<<"                    Section: 1-D\n";
               cout<<"                    Semester: 2\n";
               cout<<"                    Faculty of Computer Science\n";
               
               int select;
               do{
               int n;
               cout<<"Select:\n";
               cout<<"       1.Dues Pending\n";
               cout<<"       2.Attendance\n";
               cout<<"       3.Result card\n";
               cin>>n;
               system("cls");

if(n==1){
    cout<<"    Due Pending: 0\n";
}

else if(n==2){
    cout<<"  English: 89.00%\n";
    cout<<"  Physics: 85.00%\n";
    cout<<"  Programming Fundamentals: 90.00%\n";
    cout<<"  Intro to Logic: 87.00%\n";
    cout<<"  ICT: 92.00%\n";
    cout<<"  PF(lab): 100.00%\n";
    cout<<"  ICT(lab): 95.00%\n";
}

else if(n=3){
    int choice;
    do{
    int m;
    cout<<"Select subject: \n";
    cout<<"               1.Physics\n";
    cout<<"               2.ICT\n";
    cout<<"               3.English\n";
    cout<<"               4.ITL\n";
    cout<<"               5.PF\n";
    cout<<"               6.PF Lab\n";
    cout<<"               7.ICT Lab\n";
    cin>>m;
    if(m==1){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        9.00               90.00\n";
    cout<<"Quiz             20.00        32.00              80.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        36.00              90.00\n";
}

else if(m==2){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        9.00               90.00\n";
    cout<<"Quiz             20.00        17.00              82.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        7.00               70.00\n";
    cout<<"Final Term       40.00        36.00              90.00\n";
}

else if(m==3){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        9.00               90.00\n";
    cout<<"Quiz             20.00        18.00              00.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        36.00              90.00\n";
}

else if(m==4){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        9.50               95.00\n";
    cout<<"Quiz             20.00        10.00              50.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        40.00              100.00\n";
}

else if(m==5){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        9.00               90.00\n";
    cout<<"Quiz             20.00        16.00              80.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        26.00              76.00\n";
}

else if(m==6){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       20.00        18.00              90.00\n";
    cout<<"Lab Task         10.00        10.00              100.00\n";
    cout<<"Viva             30.00        26.50              88.33\n";
    cout<<"Final Term       40.00        36.00              90.00\n";
}

else if(m==7){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       20.00        18.00              90.00\n";
    cout<<"Viva             30.00        16.00              80.00\n";
    cout<<"Lab Task         10.00        26.50              88.33\n";
    cout<<"Final Term       40.00        34.00              86.00\n";
}
else{
    cout<<"Invalid Choice!";
}
 cout<<endl;
 cout << "Check result of another subject [ 1.yes / 2.no ] ";
        cin >> choice;
    } while (choice == 1 );
}
else{
    cout<<"Invalid Choice!";
}cout<<endl;
cout<<"                    Main menu[1.yes/2.no]:\n ";
cin>>select;
}
while(select==1);
}

void student6(){
               cout<<"Personal Information:\n";
               cout<<"                    Zain ul Abideen\n";
               cout<<"                    Section: 1-D\n";
               cout<<"                    Semester: 2\n";
               cout<<"                    Faculty of Computer Science\n";
               
               int select;
               do{
               int n;
               cout<<"Select:\n";
               cout<<"       1.Dues Pending\n";
               cout<<"       2.Attendance\n";
               cout<<"       3.Result card\n";
               cin>>n;
               system("cls");

if(n==1){
    cout<<"   Due Pending: 10000/Rs.\n";
}

else if(n==2){
    cout<<"  English: 93.00%\n";
    cout<<"  Physics 87.00%\n";
    cout<<"  Programming Fundamentals: 79.00%\n";
    cout<<"  Intro to Logic: 93.00%\n";
    cout<<"  ICT: 85.00%\n";
    cout<<"  PF(lab): 85.00%\n";
    cout<<"  ICT(lab): 92.00%\n";
}

else if(n=3){
    int choice;
    do{
    int m;
    cout<<"Select subject: \n";
    cout<<"               1.Physics\n";
    cout<<"               2.ICT\n";
    cout<<"               3.English\n";
    cout<<"               4.ITL\n";
    cout<<"               5.PF\n";
    cout<<"               6.PF Lab\n";
    cout<<"               7.ICT Lab\n";
    cin>>m;
    if(m==1){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        10.00              100.00\n";
    cout<<"Quiz             20.00        15.00              75.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        35.00              88.00\n";
}

else if(m==2){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        9.50               95.00\n";
    cout<<"Quiz             20.00        18.00              90.00\n";
    cout<<"Mid Term         20.00        17.00              86.00\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        36.00              90.00\n";
}

else if(m==3){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        9.00               90.00\n";
    cout<<"Quiz             20.00        32.00              80.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        36.00              90.00\n";
}

else if(m==4){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        9.00               90.00\n";
    cout<<"Quiz             20.00        14.00              68.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        36.00              90.00\n";
}

else if(m==5){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        9.00               90.00\n";
    cout<<"Quiz             20.00        20.00              100.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        40.00              100.00\n";
}

else if(m==6){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       20.00        18.00              90.00\n";
    cout<<"Lab Task         10.00        5.00               50.00\n";
    cout<<"Viva             30.00        26.50              88.33\n";
    cout<<"Final Term       40.00        36.00              90.00\n";
}

else if(m==7){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       20.00        18.00              90.00\n";
    cout<<"Viva             30.00        20.00              65.00\n";
    cout<<"Lab Task         10.00        26.50              88.33\n";
    cout<<"Final Term       40.00        36.00              90.00\n";
}
else{
    cout<<"Invalid Choice!";
}
 cout<<endl;
 cout << "Check result of another subject [ 1.yes / 2.no ] ";
        cin >> choice;
    } while (choice == 1 );
}
else{
    cout<<"Invalid Choice!";
}cout<<endl;
cout<<"                    Main menu[1.yes/2.no]:\n ";
cin>>select;
}
while(select==1);
}

void student7(){
               cout<<"Personal Information:\n";
               cout<<"                    Anus Shamshad\n";
               cout<<"                    Section: 1-D\n";
               cout<<"                    Semester: 2\n";
               cout<<"                    Faculty of Computer Science\n";
               
               int select;
               do{
               int n;
               cout<<"Select:\n";
               cout<<"       1.Dues Pending\n";
               cout<<"       2.Attendance\n";
               cout<<"       3.Result card\n";
               cin>>n;
               system("cls");

if(n==1){
    cout<<"   Due Pending: 50000/Rs.\n";
}

else if(n==2){
        cout<<"  English: 95.00%\n";
        cout<<"  Physics: 86.00%\n";
        cout<<"  Programming Fundamentals: 92.00%\n";
        cout<<"  Intro to Logic: 82.00%\n";
        cout<<"  ICT: 84.00%\n";
        cout<<"  PF(lab): 98.00%\n";
        cout<<"  ICT(lab): 93.00%\n";
}

else if(n=3){
    int choice;
    do{
    int m;
    cout<<"Select subject: \n";
    cout<<"               1.Physics\n";
    cout<<"               2.ICT\n";
    cout<<"               3.English\n";
    cout<<"               4.ITL\n";
    cout<<"               5.PF\n";
    cout<<"               6.PF Lab\n";
    cout<<"               7.ICT Lab\n";
    cin>>m;
    if(m==1){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        10.00              100.00\n";
    cout<<"Quiz             20.00        10.00              50.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        36.00              90.00\n";
}

else if(m==2){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        5.00               50.00\n";
    cout<<"Quiz             20.00        18.00              90.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        34.00              86.00\n";

}

else if(m==3){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        9.00               90.00\n";
    cout<<"Quiz             20.00        15.00              75.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        36.00              90.00\n";
}

else if(m==4){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        9.50               95.00\n";
    cout<<"Quiz             20.00        16.00              80.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        30.00              75.00\n";
}

else if(m==5){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        9.00               90.00\n";
    cout<<"Quiz             20.00        20.00              100.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        40.00              100.00\n";
}

else if(m==6){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       20.00        18.00              90.00\n";
    cout<<"Lab Task         10.00        10.00              100.00\n";
    cout<<"Viva             30.00        26.50              88.33\n";
    cout<<"Final Term       40.00        26.00              70.00\n";
}

else if(m==7){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       20.00        18.00              90.00\n";
    cout<<"Viva             30.00        15.00              50.00\n";
    cout<<"Lab Task         10.00        26.50              88.33\n";
    cout<<"Final Term       40.00        40.00              100.00\n";
}
else{
    cout<<"Invalid Choice!";
}
 cout<<endl;
 cout << "Check result of another subject [ 1.yes / 2.no ] ";
        cin >> choice;
    } while (choice == 1 );
}
else{
    cout<<"Invalid Choice!";
}cout<<endl;
cout<<"                    Main menu[1.yes/2.no]:\n ";
cin>>select;
}
while(select==1);
}

void student8(){
               cout<<"Personal Information:\n";
               cout<<"                    Rashid Iqbal\n";
               cout<<"                    Section: 1-D\n";
               cout<<"                    Semester: 2\n";
               cout<<"                    Faculty of Computer Science\n";
               
               int select;
               do{
               int n;
               cout<<"Select:\n";
               cout<<"       1.Dues Pending\n";
               cout<<"       2.Attendance\n";
               cout<<"       3.Result card\n";
               cin>>n;
               system("cls");

if(n==1){
    cout<<"    Due Pending: 7500/Rs.\n";
}

else if(n==2){
cout<<"   English: 96.00%\n";
cout<<"   Physics: 98.00%\n";
cout<<"   Programming Fundamentals: 92.00%\n";
cout<<"   Intro to Logic: 88.00%\n";
cout<<"   ICT: 86.00%\n";
cout<<"   PF(lab): 98.00%\n";
cout<<"   ICT(lab): 84.00%\n";
}

else if(n=3){
    int choice;
    do{
    int m;
    cout<<"Select subject: \n";
    cout<<"               1.Physics\n";
    cout<<"               2.ICT\n";
    cout<<"               3.English\n";
    cout<<"               4.ITL\n";
    cout<<"               5.PF\n";
    cout<<"               6.PF Lab\n";
    cout<<"               7.ICT Lab\n";
    cin>>m;
    if(m==1){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        9.00               90.00\n";
    cout<<"Quiz             20.00        20.00              100.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        20.00              50.00\n";
}

else if(m==2){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        9.50               95.00\n";
    cout<<"Quiz             20.00        12.00              60.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        30.00              74.00\n";

}

else if(m==3){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        9.00               90.00\n";
    cout<<"Quiz             20.00        20.00              100.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        36.00              90.00\n";
}

else if(m==4){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        8.00               80.00\n";
    cout<<"Quiz             20.00        15.00              75.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        30.00              76.00\n";
}

else if(m==5){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        9.00               90.00\n";
    cout<<"Quiz             20.00        19.00              95.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        38.00              95.00\n";
}


else if(m==6){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       20.00        18.00              90.00\n";
    cout<<"Lab Task         10.00        31.00              78.70\n";
    cout<<"Viva             30.00        26.50              88.33\n";
    cout<<"Final Term       40.00        39.00              98.00\n";
}


else if(m==7){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       20.00        18.00              90.00\n";
    cout<<"Viva             30.00        29.00              98.00\n";
    cout<<"Lab Task         10.00        26.50              88.33\n";
    cout<<"Final Term       40.00        40.00              100.00\n";
}
else{
    cout<<"Invalid Choice!";
}
 cout<<endl;
 cout << "Check result of another subject [ 1.yes / 2.no ] ";
        cin >> choice;
    } while (choice == 1 );
}
else{
    cout<<"Invalid Choice!";
}cout<<endl;
cout<<"                    Main menu[1.yes/2.no]:\n ";
cin>>select;
}
while(select==1);
}

void student9(){
               cout<<"Personal Information:\n";
               cout<<"                    M.Nasar Fareed\n";
               cout<<"                    Section: 1-D\n";
               cout<<"                    Semester: 2\n";
               cout<<"                    Faculty of Computer Science\n";
               
               int select;
               do{
               int n;
               cout<<"Select:\n";
               cout<<"       1.Dues Pending\n";
               cout<<"       2.Attendance\n";
               cout<<"       3.Result card\n";
               cin>>n;
               system("cls");

if(n==1){
    cout<<"   Due Pending: 0\n";
}

else if(n==2){
cout<<"  English: 93.00%\n";
cout<<"  Physics: 95.00%\n";
cout<<"  Programming Fundamentals: 85.00%\n";
cout<<"  Intro to Logic: 78.00%\n";
cout<<"  ICT: 86.00%\n";
cout<<"  PF(lab): 85.00%\n";
cout<<"  ICT(lab): 93.00%\n";
}

else if(n=3){
    int choice;
    do{
    int m;
    cout<<"Select subject: \n";
    cout<<"               1.Physics\n";
    cout<<"               2.ICT\n";
    cout<<"               3.English\n";
    cout<<"               4.ITL\n";
    cout<<"               5.PF\n";
    cout<<"               6.PF Lab\n";
    cout<<"               7.ICT Lab\n";
    cin>>m;
    if(m==1){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        9.00               90.00\n";
    cout<<"Quiz             20.00        17.00              85.00\n";
    cout<<"Mid Term         20.00        15.50              77.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        32.00              82.00\n";
}

else if(m==2){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        5.00               50.00\n";
    cout<<"Quiz             20.00        19.00              97.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        25.00              74.00\n";
}

else if(m==3){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        9.00               90.00\n";
    cout<<"Quiz             20.00        20.00              100.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        26.00              78.00\n";
}

else if(m==4){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        9.00               90.00\n";
    cout<<"Quiz             20.00        17.00              88.50\n";
    cout<<"Mid Term         20.00        15.50              77.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        20.00              50.00\n";
}

else if(m==5){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        6.50               65.00\n";
    cout<<"Quiz             20.00        20.00              100.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        26.00              76.00\n";
}

else if(m==6){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       20.00        18.00              90.00\n";
    cout<<"Lab Task         10.00        7.00               70.00\n";
    cout<<"Viva             30.00        26.50              88.33\n";
    cout<<"Final Term       40.00        35.00              88.00\n";
}

else if(m==7){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       20.00        18.00              90.00\n";
    cout<<"Viva             30.00        30.00              100.00\n";
    cout<<"Lab Task         10.00        8.50               85.00\n";
    cout<<"Final Term       40.00        39.00              96.00\n";
}
else{
    cout<<"Invalid Choice!";
}
 cout<<endl;
 cout << "Check result of another subject [ 1.yes / 2.no ] ";
        cin >> choice;
    } while (choice == 1 );
}
else{
    cout<<"Invalid Choice!";
}cout<<endl;
cout<<"                    Main menu[1.yes/2.no]:\n ";
cin>>select;
}
while(select==1);
}

void student10(){
               cout<<"Personal Information:\n";
               cout<<"                    Haseeb Tariq\n";
               cout<<"                    Section: 1-D\n";
               cout<<"                    Semester: 2\n";
               cout<<"                    Faculty of Computer Science\n";
               
               int select;
               do{
               int n;
               cout<<"Select:\n";
               cout<<"       1.Dues Pending\n";
               cout<<"       2.Attendance\n";
               cout<<"       3.Result card\n";
               cin>>n;
               system("cls");

if(n==1){
    cout<<"   Due Pending: 20000/Rs.\n";
}

else if(n==2){
cout<<"  English: 93.00%\n";
cout<<"Physics: 98.00%\n";
cout<<"Programming Fundamentals: 91.00%\n";
cout<<"Intro to Logic: 85.00%\n";
cout<<"ICT: 82.00%\n";
cout<<"PF(lab): 98.00%\n";
cout<<"ICT(lab): 100.00%\n";
}

else if(n=3){
    int choice;
    do{
    int m;
    cout<<"Select subject: \n";
    cout<<"               1.Physics\n";
    cout<<"               2.ICT\n";
    cout<<"               3.English\n";
    cout<<"               4.ITL\n";
    cout<<"               5.PF\n";
    cout<<"               6.PF Lab\n";
    cout<<"               7.ICT Lab\n";
    cin>>m;
    if(m==1){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        10.00              100.00\n";
    cout<<"Quiz             20.00        19.00              94.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        20.00              50.00\n";
}

else if(m==2){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        6.00               60.00\n";
    cout<<"Quiz             20.00        10.00              50.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        28.00              68.00\n";
}

else if(m==3){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        6.00               60.00\n";
    cout<<"Quiz             20.00        20.00              100.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        36.50              91.00\n";
}

else if(m==4){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        9.00               90.00\n";
    cout<<"Quiz             20.00        19.00              95.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        38.00              95.00\n";
}

else if(m==5){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       10.00        9.50               95.00\n";
    cout<<"Quiz             20.00        10.00              50.00\n";
    cout<<"Mid Term         20.00        17.50              87.50\n";
    cout<<"Presentation     10.00        8.00               80.00\n";
    cout<<"Final Term       40.00        31.00              80.75\n";
}

else if(m==6){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       20.00        19.00              95.00\n";
    cout<<"Lab Task         10.00        8.00               80.00\n";
    cout<<"Viva             30.00        26.50              88.33\n";
    cout<<"Final Term       40.00        34.00              88.00\n";
}

else if(m==7){
    cout<<"                 Max Mark     Obtained Marks     Percentage\n";
    cout<<"Assignment       20.00        16.00              70.00\n";
    cout<<"Viva             30.00        30.00              100.00\n";
    cout<<"Lab Task         10.00        9.50               85.00\n";
    cout<<"Final Term       40.00        39.00              98.00\n";
}
else{
    cout<<"Invalid Choice!";
}
 cout<<endl;
 cout << "Check result of another subject [ 1.yes / 2.no ] ";
        cin >> choice;
    } while (choice == 1 );
}
else{
    cout<<"Invalid Choice!";
}cout<<endl;
cout<<"                    Main menu[1.yes/2.no]:\n ";
cin>>select;
}
while(select==1);
}

int main (){
    int choice;
    do{
    int pass1=1234;
    int pass2=1234;
    int pass3=1234;
    int pass4=1234;
    int pass5=1234;
    int pass6=1234;
    int pass7=1234;
    int pass8=1234;
    int pass9=1234;
    int pass10=1234;
    int rollno;
    cout<<"Enter Roll no: \n";
    cout<<"SU92-BSCSM-F23-";
    cin>>rollno;
    int user_password;
    cout<<"Enter Password\n";
    cin>>user_password;
    system("cls");
    if(rollno==101&&user_password==pass1)
    {
        student1();
    }
    else if(rollno==102&&user_password==pass2){
        student2();
    }
     else if(rollno==103&&user_password==pass3){
        student3();
    }
     else if(rollno==104&&user_password==pass4){
        student4();
    }
     else if(rollno==105&&user_password==pass5){
        student5();
    }
     else if(rollno==106&&user_password==pass6){
        student6();
    }
     else if(rollno==107&&user_password==pass7){
        student7();
    }
     else if(rollno==108&&user_password==pass8){
        student8();
    }
     else if(rollno==109&&user_password==pass9){
        student9();
    }
     else if(rollno==110&&user_password==pass10){
        student10();
    }
    else{
        cout<<"Oops! Invalid input.\n";
    }

    cout << "Login Again [ 1.yes / 2.no ] ";
        cin >> choice;
    } while (choice == 1);
    
return 0;
}


