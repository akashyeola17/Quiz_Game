#include<iostream>
#include<string>

using namespace std;

void display_menu();
void rules();


void sports_quiz();
void Gk_quiz();
void Technology();

//void rules();
int main(){
    rules();
    display_menu();

    int selection;
    cin>>selection;
    if(selection == 1){
        sports_quiz();
    }else if(selection == 2){
        Gk_quiz();
    }else if(selection == 3){
        Technology();
    }
return 0;
}
void display_menu(){

    cout<<"\n\n-----------Please select from the following menu which quiz you want to Play----------------"<<endl;
    cout<<"\t\t\t\t\t1.Sports Quiz"<<endl;
    cout<<"\t\t\t\t\t2.General Knowledge Quiz"<<endl;
    cout<<"\t\t\t\t\t3.Technology"<<endl;
    cout<<"-----Please Choose from the following option----------------"<<endl;
}
void rules(){
    cout<<"----------------------"<<endl;
    cout<<"Rules:-\n"<<"Each question will  One mark";
    cout<<"\n2.The wrong answer will decrement the point by one";
    cout<<"\n3.There will be 10 questions each for all questions";
}
void sports_quiz(){
    char option{};
    int points{};
    cout<<"----------Lets start the sports quiz-----"<<endl;
    //---------Question 1------------------------------
    cout<<"\n\nQ.1) What does the olympic Flame Symbolize?\n[a].Zeal to play Sports\n[b].Challenge\n[c].Continuity\n[d].Integrity"<<endl;
    cin>>option;
    if(option == 'a'){
        cout<<"Wrong Answer"<<endl;
        points -=1;
        }else if(option == 'b'){
            cout<<"Wrong Answer"<<endl;
            points -=1;
        }else if(option == 'c'){
            cout<<"Correct Answer..!!!"<<endl;
            points +=1;

        }else if(option == 'd'){
            cout<<"Wrong Answer"<<endl;
            points -=1;
        }else{
            cout<<"Please Choose correct Option"<<endl;
        }
        //----------------------Question 2-------------
        cout<<"Q.2) India Played its first One day international with which country and in which year? \n[a].England 1975 \n[b].Australia 1976 \n[c].New Zealand 1975 \n[d].England 1978"<<endl;
        cin>>option;
        if(option == 'a' ){
            cout<<"Correct Answer..!!!"<<endl;
            points += 1;
        }else if(option == 'b'){
            cout<<"Wrong Answer"<<endl;
            points -=1;
        }else if(option == 'c'){
            cout<<"Wrong Answer"<<endl;
            points -=1;
        }else if(option =='d'){
            cout<<"Wrong Answer"<<endl;
            points -=1;
        }else{
            cout<<"Please choose correct option"<<endl;
        }
        //question 3-----------
        cout<<"Q.3) In international Cricket,the game is adjudicated by how many umpires? \n[a].Two umpires,aided by a third umpire and a match referee \n[b].One umpire ,aided by a match referee and a third Umpire \n[c].Two umpires,aided by a match referee \n[d].two umpires,aided by a match referee"<<endl;
        cin>>option;
        if(option == 'a'){
            cout<<"Correct Answer..!!"<<endl;
            points += 1;
        }else if(option == 'b'){
            cout<<"Wrong Answer"<<endl;
            points -=1;
        }else if(option == 'c'){
            cout<<"Wrong Answer"<<endl;
            points -= 1;
        }else if(option == 'd'){
            cout<<"Wrong Answer"<<endl;
            points -=1;
        }else{
            cout<<"Please Choose Correct option"<<endl;
        }
        cout<<"Q.4) Who had started the internaional Women's Boxing Hall of Fame ? \n[a].Terri Moss \n[b].Sue TL Fox \n[c].clsressa Shields \n[d].Barbara Buttrick"<<endl;
        cin>>option;
        if(option == 'a'){
            cout<<"Wrong Answer"<<endl;
            points -=1;
        }else if(option == 'b'){
            cout<<"Correct Answer"<<endl;
            points += 1;
        }else if(option == 'c'){
            cout<<"Wrong Answer"<<endl;
            points -=1;
        }else if(option == 'd'){
            cout<<"Wrong Answer"<<endl;
            points -=1;
        }else{
            cout<<"Please choose Correct option"<<endl;
        }
        cout<<"Q.5) Which country has won the maximum number of medals in the all time history of commonwealth games? \n[a].Australia \n[b].England \n[c].India \n[d].Canada"<<endl;
        cin>>option;
        if(option == 'a'){
            cout<<"Correct Answer"<<endl;
            points +=1;
        }else if(option =='b'){
            cout<<"Wrong Answer"<<endl;
            points -=1;
        }else if(option == 'c'){
            cout<<"Wrong Answer"<<endl;
            points -= 1;
        }else if(option == 'd'){
            cout<<"Wrong Answer"<<endl;
            points -=1;
        }else{
            cout<<"Please Choose Correct option"<<endl;
        }
        cout<<"Q.6) Where were the commonwealth Games first held ? \n[a].Bath \n[b].Ayer \n[c].Hamilton \n[d].Manchester"<<endl;
        cin>>option;
        if(option == 'a'){
            cout<<"Wrong Anser"<<endl;
            points -= 1;
        }else if(option == 'b'){
            cout<<"Wrong Answer"<<endl;
            points -= 1;
        }else if(option == 'c'){
            cout<<"Correct Answer"<<endl;
            points +=1;
        }else if(option == 'd'){
            cout<<"Wrong Answer"<<endl;
            points -= 1;
        }else{
            cout<<"Please choose correct option"<<endl;
        }
        cout<<"Q.7) Where were the first Asian games held? \n[a].Jakarta \n[b].Kathmandu \n[c].New Delhi \n[d].Islamabad"<<endl;
        cin>>option;
        if(option == 'a'){
            cout<<"Wrong Answer"<<endl;
            points -=1;
        }else if(option  == 'b'){
            cout<<"Wrong Answer"<<endl;
            points -= 1;
        }else if(option == 'c'){
            cout<<"Correct Answer"<<endl;
            points +=1;
        }else if(option == 'd'){
            cout<<"Wrong Answer"<<endl;
            points -= 1;
        }else{
            cout<<"Please choose correct option"<<endl;
        }
        cout<<"Q.8) Which of the following nation was not a founding member of the Badminton World Federation ? \n[a].Germany \n[b].France \n[c].England \n[d].Netherlands"<<endl;
        cin>>option;
        if(option =='a'){
            cout<<"Correct Answer"<<endl;
            points += 1;
        }else if(option == 'b'){
            cout<<"Wrong Answer"<<endl;
            points -=1;
        }else if(option  == 'c'){
            cout<<"Wrong Answer"<<endl;
            points -=1;
        }else if(option == 'd'){
            cout<<"Wrong Answer"<<endl;
            points -=1;
        }else{
            cout<<"Please choose correct option"<<endl;
        }
        cout<<"Q.9) Which was the first 1st non test playing country to beat India in an International match ?\n[a].canada \n[b].Sri lanka \n[c].Zimbabwe \n[d].East Africa"<<endl;
        cin>>option;
        if(option == 'a'){
            cout<<"Wrong Answer"<<endl;
            points -= 1;
        }else if (option == 'b'){
            cout<<"Correct Answer"<<endl;
            points += 1;
        }else if(option == 'c'){
            cout<<"Wrong  Answer"<<endl;
            points -=1;
        }else if(option == 'd'){
            cout<<"Wrong Answer"<<endl;
            points -= 1;
        }else{
            cout<<"Please choose correct Answer"<<endl;
        }
        cout<<"Q.10) India Won its first Olympic hockey gold in..? \n[a].1928 \n[b].1932 \n[c].1936 \n[d].1948"<<endl;
        cin>>option;
        if(option == 'a'){
            cout<<"Correct Answer"<<endl;
            points += 1;
        }else if(option == 'b'){
            cout<<"Wrong Answer"<<endl;
            points -= 1;
        }else if(option == 'c'){
            cout<<"Wrong Answer"<<endl;
            points -=1;
        }else if(option == 'd'){
            cout<<"Wrong Answer"<<endl;
            points -=1;
        }
        cout<<"Hey"<<" your total points are:"<<points<<"/10"<<endl;
}
void Gk_quiz(){
    char option{};
    int points{};
    cout<<"---------Lets start the general knowledge Quiz------------"<<endl;
    cout<<"\n\nQ.1) For which of the following disciplines is nobel prize awarded? \n[a].Physics and chemistry \n[b].physiology or medicine \n[c].Literature,Peace and Economics \n[d].All of the above"<<endl;
    cin>>option;
    if(option == 'a'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else if(option == 'b'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else if(option == 'c'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else if(option == 'd'){
        cout<<"Correct Answer"<<endl;
        points += 1;
    }else {
        cout<<"Please choose correct option"<<endl;
    }
    cout<<"Q.2) Hitler party came into power in 1933 is known as ? \n[a].Labour Party \n[b].Nazi party \n[c].ku-klux party \n[d].Democratic Party"<<endl;
    cin>>option;
    if(option == 'a'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else if(option == 'b'){
        cout<<"correct Answer"<<endl;
        points += 1;
    }else if(option == 'c'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else if(option == 'd'){
        cout<<"wrong Answer"<<endl;
        points -= 1;
    }else {
        cout<<"Please choose correct option"<<endl;
    }
    cout<<"Q.3) FFC stands for ? \n[a].Foreign Finance Corporation \n[b].FIlm finance corporation \n[c].Federation of Football council \n[d].None of the above"<<endl;
    cin>>option;
    if(option == 'a'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else if(option == 'b'){
        cout<<"correct Answer"<<endl;
        points += 1;
    }else if(option == 'c'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else if(option == 'd'){
        cout<<"wrong Answer"<<endl;
        points -= 1;
    }else {
        cout<<"Please choose correct option"<<endl;
    }
    cout<<"Q.4) Galileo was an Italian astronomer who ? \n[a].developed the telescope \n[b]. discovered four satellites of jupiter \n[c].discovered that the movement of pendulum produces a regular time measurement \n[d].All of the above"<<endl;
    cin>>option;
    if(option == 'a'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else if(option == 'b'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else if(option == 'c'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else if(option == 'd'){
        cout<<"Correct Answer"<<endl;
        points += 1;
    }else {
        cout<<"Please choose correct option"<<endl;
    }
    cout<<"Q.5) First China War was fought between ? \n[a].China and Britain \n[b].China and france \n[c].China and Egypt \n[d].China and Greek"<<endl;
    cin>>option;
    if(option == 'a'){
        cout<<"Correct Answer"<<endl;
        points += 1;
    }else if(option == 'b'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else if(option == 'c'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else if(option == 'd'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else {
        cout<<"Please choose correct option"<<endl;
    }
    cout<<"Q.6) Film and TV institute of India is located at ? \n[a].Pune(Maharashtra) \n[b].Rajkot(Gujarat) \n[c].Pimpri(Maharashtra) \n[d].Perambur(Tamilnadu)"<<endl;
    cin>>option;
    if(option == 'a'){
        cout<<"Correct Answer"<<endl;
        points += 1;
    }else if(option == 'b'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else if(option == 'c'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else if(option == 'd'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else {
        cout<<"Please choose correct option"<<endl;
    }
    cout<<"Q.7) Guru Gobind singh was ? \n[a].The 10th Guru of the Sikhs \n[b].Founder of khalsa,the inner council of the Sikhs in 1699 \n[c].Author of Dasam Granth \n[d].All of the above"<<endl;
    cin>>option;
    if(option == 'a'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else if(option == 'b'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else if(option == 'c'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else if(option == 'd'){
        cout<<"Correct Answer"<<endl;
        points += 1;
    }else {
        cout<<"Please choose correct option"<<endl;
    }
    cout<<"Q.8) During World War 2 ,When did germany attack France? \n[a].1940 \n[b].1941 \n[c].1942 \n[d].1943"<<endl;
    cin>>option;
    if(option == 'a'){
        cout<<"Correct Answer"<<endl;
        points += 1;
    }else if(option == 'b'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else if(option == 'c'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else if(option == 'd'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else {
        cout<<"Please choose correct option"<<endl;
    }
    cout<<"Q.9) Ecology deals with ? \n[a].Birds \n[b].cell formation \n[c].relation between organisms and their environment \n[d].Tissues"<<endl;
    cin>>option;
    if(option == 'a'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else if(option == 'b'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else if(option == 'c'){
        cout<<"Correct  Answer"<<endl;
        points += 1;
    }else if(option == 'd'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else {
        cout<<"Please choose correct option"<<endl;
    }
    cout<<"Q.10) For purifying drinking water alum is used ? \n[a].for coagulation of mud particles \n[b].To kill bacteria \n[c].To remove salts \n[d].To remove gases"<<endl;
    cin>>option;
    if(option == 'a'){
        cout<<"Correct Answer"<<endl;
        points += 1;
    }else if(option == 'b'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else if(option == 'c'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else if(option == 'd'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else {
        cout<<"Please choose correct option"<<endl;
    }
    cout<<"The final score is :"<<points<<"/10"<<endl;
}
void Technology(){
    char option{};
    int points{};
    cout<<"-----------Lets start the Quiz--------"<<endl;
    cout<<"Q.1) 'OS' computer abbreviation usually means ? \n[a].order of significance \n[b].Open Software \n[c].Operating system \n[d].Optical Sensor"<<endl;
    cin>>option;
    if(option == 'a'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else if(option == 'b'){
        cout<<"Wrong Answer"<<endl;
        points -=1;
    }else if(option == 'c'){
        cout<<"Correct Answer"<<endl;
        points +=1;
    }else if(option == 'd'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else {
        cout<<"Please choose correct option"<<endl;
    }
    cout<<"Q.2) .MOV extension refers usually to what kind of file? \n[a].Image File \n[b].Animation/movie file \n[c].Audio File \n[d].MS office document"<<endl;
    cin>>option;
    if(option == 'a'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else if(option == 'b'){
        cout<<"Correct Answer "<<endl;
        points +=1;
    }else if(option == 'c'){
        cout<<"Wrong Answer"<<endl;
        points -=1;
    }else if(option == 'd'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else {
        cout<<"Please choose correct option"<<endl;
    }
    cout<<"Q.3) Made from a variety of materials,such as carbon ,which inhibits the flow of current..? \n[a].Choke \n[b].Inductor \n[c].Resistor \n[d].Capacitor"<<endl;
    cin>>option;
    if(option == 'a'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else if(option == 'b'){
        cout<<"Wrong Answer"<<endl;
        points -=1;
    }else if(option == 'c'){
        cout<<"Correct Answer"<<endl;
        points +=1;
    }else if(option == 'd'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else {
        cout<<"Please choose correct option"<<endl;
    }
    cout<<"Q.4) What frequecy range is the high Frequency band ? \n[a].Hundred kHz \n[b]. one Ghz \n[c].Thirty to Three Hundred MHz \n[d].Three to Thirty MHz"<<endl;
    cin>>option;
    if(option == 'a'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else if(option == 'b'){
        cout<<"Wrong Answer"<<endl;
        points -=1;
    }else if(option == 'c'){
        cout<<"Wrong Answer"<<endl;
        points -=1;
    }else if(option == 'd'){
        cout<<"Correct Answer"<<endl;
        points += 1;
    }else {
        cout<<"Please choose correct option"<<endl;
    }
    cout<<"Q.5) What does the term PLC stands for ? \n[a].Programmable Lift Computer \n[b].Program List Control \n[c].Programmable Logic Controller \n[d].Piezo Lamp Connector"<<endl;
    cin>>option;
    if(option == 'a'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else if(option == 'b'){
        cout<<"Wrong Answer"<<endl;
        points -=1;
    }else if(option == 'c'){
        cout<<"Correct Answer"<<endl;
        points +=1;
    }else if(option == 'd'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else {
        cout<<"Please choose correct option"<<endl;
    }
    cout<<"Q.6) In the United States the television broadcast standard is..? \n[a].PAL \n[b].NTSC \n[c].SECAM \n[d].RGB"<<endl;
    cin>>option;
    if(option == 'a'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else if(option == 'b'){
        cout<<"Correct Answer "<<endl;
        points +=1;
    }else if(option == 'c'){
        cout<<"Wrong Answer"<<endl;
        points -=1;
    }else if(option == 'd'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else {
        cout<<"Please choose correct option"<<endl;
    }
    cout<<"Q.7) The transformer that develops the high voltage in a home television is commonly called a..? \n[a].Tesla coil \n[b].Flyback \n[c].Yoke \n[d].Van de Graaf"<<endl;
    cin>>option;
    if(option == 'a'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else if(option == 'b'){
        cout<<"Correct Answer"<<endl;
        points +=1;
    }else if(option == 'c'){
        cout<<"CWrong Answer"<<endl;
        points +=1;
    }else if(option == 'd'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else {
        cout<<"Please choose correct option"<<endl;
    }
    cout<<"Q.8) The NTSC (National television Standards Committee) is also used in the country of..? \n[a].Japan \n[b].France \n[c].Germany \n[d].England"<<endl;
    cin>>option;
    if(option == 'a'){
        cout<<"Correct Answer"<<endl;
        points += 1;
    }else if(option == 'b'){
        cout<<"Wrong Answer"<<endl;
        points -=1;
    }else if(option == 'c'){
        cout<<"Wrong Answer"<<endl;
        points -=1;
    }else if(option == 'd'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else {
        cout<<"Please choose correct option"<<endl;
    }
    cout<<"Q.9) 'DTP' computer abbreviation usually means ? \n[a].Digital Transmission Protocol \n[b].DeskTop Publishing \n[c].Data Type Programming \n[d].Document Type Processing"<<endl;
    cin>>option;
    if(option == 'a'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else if(option == 'b'){
        cout<<"Correct Answer"<<endl;
        points +=1;
    }else if(option == 'c'){
        cout<<"Wrong Answer"<<endl;
        points -=1;
    }else if(option == 'd'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else {
        cout<<"Please choose correct option"<<endl;
    }
    cout<<"Q.10) What does AC and DC stands for in the electrical field? \n[a].Alternating Current and Direct Current \n[b].A Rock Band from Australia \n[c].Average Current and Discharged Capacitor \n[d].Atlantic City and District of Columbia"<<endl;
    cin>>option;
    if(option == 'a'){
        cout<<"Correct Answer"<<endl;
        points += 1;
    }else if(option == 'b'){
        cout<<"Wrong Answer"<<endl;
        points -=1;
    }else if(option == 'c'){
        cout<<"Wrong Answer"<<endl;
        points -=1;
    }else if(option == 'd'){
        cout<<"Wrong Answer"<<endl;
        points -= 1;
    }else {
        cout<<"Please choose correct option"<<endl;
    }
    cout<<"The total points are:"<<points<<"/10"<<endl;
}