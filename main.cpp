#include <bits/stdc++.h>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <ctime>

using namespace std;

// function to greet the user according to time
void greetings(){
    // current date  and time based on your system timezone
    time_t now = time(0);
    tm *time = localtime(&now);

    if (time-> tm_hour < 12){
        cout<< "Good Morning Mr.Nikhil !! Good to see you again :)"<<endl;
        string phrase = "Good Morning Mr Nikhil  Good to see you again :)";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour >= 12 && time->tm_hour <= 16){
        cout<< "Good Afternoon Mr.Nikhil !! Good to see you again :)"<<endl;
        string phrase = "Good Afternoon Mr Nikhil Good to see you again :)";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour > 16 && time->tm_hour < 24){
        cout<< "Good Evening Mr.Nikhil !! Good to see you again :)"<<endl;
        string phrase = "Good Evening Mr Nikhil  Good to see you again :)";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}

void datetime(){
    time_t now = time(0);
    char *dt = ctime(&now);
    cout<<"The date and time is "<<endl<<dt<<endl;
}

int main()
{
    system("cls");

    cout<<"\t###################################  PERSONAL ASSISTANT ########################################"<<endl<<endl;

    string password; //to take password
    string command; // to take command from the user

    do
    {
        cout<<"******************************************************"<<endl;
        cout<<"| ENTER THE PASSWORD TO CONFIRM YOU ARE NIKHIL |"<<endl;
        cout<<"******************************************************"<<endl<<endl;
        string phrase = "ENTER THE PASSWORD TO CONFIRM YOU ARE NIKHIL";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);

        getline(cin,password);

        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};

        if(password=="nikhil")
        {
            cout<<"\n<**************************************************************************************************>\n\n";
            greetings();
            do{
                cout<<"\n<**********************************************************************************************>\n\n";
                cout<<endl<<"How can I help you Mr Nikhil...."<<endl<<endl;

                string phrase = "How can i help you Mr Nikhil";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);

                cout<<"Enter your question ===> ";
                getline(cin,command);
                cout<<endl;
                cout<<"Answer to your question is ===> ";

                if(command=="hello" || command=="hi")
                {
                    cout<<"Hello Mr.Nikhil....."<<endl;
                    string phrase = "Hello Mr Nikhil";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                 else if(command=="what is the date and time right now")
                {
                    string phrase = "The date and time currently is";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    datetime();
                }


                else if(command=="who are you" || command=="who is speaking")
                {
                    cout<<"I'm a personal assistant created by Mr.Nikhil !!!"<<endl;
                    string phrase = "I'm a personal assistant created by Mr Nikhil ";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }


               else if(command=="open notepad")
                {
                    cout<<"opening notepad"<<endl;
                    string phrase = "opening notepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\WindowsApps\\Microsoft.WindowsNotepad_11.2304.26.0_x64__8wekyb3d8bbwe\\Notepad\\Notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }


                else if(command=="open Microsoft Excel")
                {
                    cout<<"opening Microsoft Excel"<<endl;
                    string phrase = "opening Microsoft Excel";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\root\\Office16\\excel.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(command=="open Microsoft Word")
                {
                    cout<<"opening Microsoft Word"<<endl;
                    string phrase = "opening Microsoft Word";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\root\\Office16\\WINWORD.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(command=="open Microsoft Paint")
                {
                    cout<<"opening Microsoft Paint"<<endl;
                    string phrase = "opening Microsoft Paint";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\WindowsApps\\Microsoft.Paint_11.2302.19.0_x64__8wekyb3d8bbwe\\PaintApp\\mspaint.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(command=="play music")
                {
                    cout<<"OK !! ENJOY THE MUSIC "<<endl;
                    string phrase = "OK  ENJOY THE MUSIC ";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL,"open","Something_Just_Like_This.mp3",NULL, NULL, SW_NORMAL);
                }

                else if(command=="open google")
                {
                    cout<<"opening google"<<endl;
                    string phrase = "opening google";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.google.com");
                }

                else if(command=="open youtube")
                {
                    cout<<"opening YouTube"<<endl;
                    string phrase = "opening YouTube";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }

                else if(command=="close chrome")
                {
                    cout<<"closing chrome browser"<<endl;
                    string phrase = "closing chrome browser";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("TASKKILL /IM chrome.exe /F");
                }


                else if(command=="open photo")
                {
                    cout<<"opening photo"<<endl;
                    string phrase = "Ok Sure  Heres the photo";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL,"open","nitwarangal.png",NULL, NULL, SW_NORMAL);
                }

                else if(command=="bye" || command=="exit")
                {
                    cout<<"Good Bye Mr.Nikhil, see you soon!"<<endl;
                    string phrase = "Good Bye Mr Nikhil see you soon";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }

                else
                {
                    cout<<"Sorry could not understand your command please try again !!!"<<endl;
                    string phrase = "Sorry could not understand your command , can you please try again";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }


            }while(1);
        }
        else
                {
                    system("cls");

                    cout<<"\t###################################  PERSONAL ASSISTANT ########################################"<<endl<<endl;
                    cout << "**********************" << endl;
                    cout << "XXXXXX---Incorrect Password---XXXXXX" << endl;
                    cout << "**********************" << endl << endl;

                    string phrase = "Incorrect Password, please enter the correct password";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
    } while (1);


    return 0;
}
