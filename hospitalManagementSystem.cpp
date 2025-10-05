#include<iostream>
#include<string>
using namespace std;

int getIntInput(string prompt) {
    int value;
    while (true) {
        cout << prompt;
        cin >> value;

        if (cin.fail()) {                    
            cin.clear();                      
            cin.ignore(10000, '\n');         
            cout << "Invalid input! Please enter a number.\n";
        } else {
            cin.ignore(10000, '\n');          
            return value;                     
        }
    } 
}

const int MAX_PATIENTS = 500;
const int MAX_DOCTORS = 50;
const int MAX_APPOINTMENTS = 200;
const int MAX_BILLS = 200;
const int MAX_LABTESTS = 200;
const int MAX_MEDICINES = 200;

class Patient{
    public:
    int id,age;
    string name,gender,contact,ailment;
    Patient(){}
    Patient(int a,int b,string c,string d,string e,string f){
      id=a;
      age=b;
      name=c;
      gender=d;
      contact=e;
      ailment=f;
    }
    void displayPatientInfo(){
        cout<<"\nPatient's details:"<<"\nPatient's id:"<<id<<"\nName :"<<name<<"\nAge :"<<age<<"\nGender :"<<gender<<"\nContact :"<<contact<<"\nAilment :"<<ailment;
    }    
};

class Doctor{
    public:
    int id;
    string name,specialization,contact;
    Doctor(){}
    Doctor(int a,string b,string c,string d){
      id=a;
      name=b;
      specialization=c;
      contact=d;
    }
    void displayDoctorInfo(){
        cout<<"\nDoctor's details :"<<"\nDoctor's id :"<<id<<"\n:Name :"<<name<<"\n:Specialisation :"<<specialization<<"\n:Contact :"<<contact;
    }   
};

class Appointment{
    public:
    int id,patientID,doctorID;
    string date,time,status;
    Appointment(){}
    Appointment(int a,int b,int c,string d,string e,string f){
      id=a;
      patientID=b;
      doctorID=c;
      date=d;
      time=e;
      status=f;  
    }
    void displayAppointmentInfo(){
        cout<<"\nAppointment :"<<"\nId :"<<id<<"\n:Patient's Id :"<<patientID<<"\n:Doctor's Id :"<<doctorID<<"\n:Date :"<<date<<"\n:Time :"<<time<<"\n:Status :"<<status;
    }   
};

class Bill{
    public:
    int id,appointmentID,patientID;
    double amount;
    string paymentStatus;
    Bill(){}
    Bill(int a,int b,int c,double d,string e){
      id=a;
      appointmentID=b;
      patientID=c;
      amount=d;
      paymentStatus=e; 
    }
    void displayBill(){
        cout<<"\nBill :"<<"\nId :"<<id<<"\n:Appointment Id :"<<appointmentID<<"\n:Patient's Id :"<<patientID<<"\n:Amount :"<<amount<<"\n:Payment Status :"<<paymentStatus;
    }   
};

class LabTest{
    public:
    int id,patientID;
    string testName,testDate,result;
    LabTest(){}
    LabTest(int a,int b,string c,string d,string e){
      id=a;
      patientID=b;
      testName=c;
      testDate=d;
      result=e;
    }
    void displayLabTest(){
        cout<<"\nLab Test :"<<"\nId :"<<id<<"\n:Patient's Id :"<<patientID<<"\n:Test's Name:"<<testName<<"\n:Test's Date:"<<testDate<<"\n:Result :"<<result;
    }   
};

class Medicine{
    public:
    int id,patientID;
    string medicineName,dosage,startDate,endDate;
    Medicine(){}
    Medicine(int a,int b,string c,string d,string e,string f){
      id=a;
      patientID=b;
      medicineName=c;
      dosage=d;
      startDate=e;
      endDate=f;
    }
    void displayMedicine(){
        cout<<"\nMedicine :"<<"\nId :"<<id<<"\n:Patient's Id :"<<patientID<<"\n:Medicine Name:" <<medicineName<< "\n:Dosage:"<<dosage<< "\n:Start Date:"<<startDate<<"\n:End Date:"<<endDate;
    }   
};

class Hospital{
Patient patients[MAX_PATIENTS];
Doctor doctors[MAX_DOCTORS];
Appointment appointments[MAX_APPOINTMENTS];
Bill bills[MAX_BILLS];
LabTest labTests[MAX_LABTESTS];
Medicine medicines[MAX_MEDICINES];
int patientCount = 0, doctorCount = 0, appointmentCount = 0, billCount = 0, labTestCount = 0, medicineCount = 0;

public:
void addPatient(){
  if(patientCount >= MAX_PATIENTS) {
            cout << "\n***************************************\n";
            cout << "\033[1mPatient list full!\033[0m\n";
            cout << "\n***************************************\n";
            return;
        }
        Patient &p = patients[patientCount];
        p.id = patientCount + 1;
        cout << "Enter name: "; getline(cin, p.name);
        p.age = getIntInput("Enter Age: ");
        cout << "Enter gender: "; getline(cin, p.gender);
        cout << "Enter contact: "; getline(cin, p.contact);
        cout << "Enter ailment: "; getline(cin, p.ailment);
        patientCount++;
        cout << "\n***************************************\n";
        cout << "\033[1mPatient added successfully!\033[0m\n";
        cout << "\n***************************************\n";
    
}

void addDoctor() {
        if(doctorCount >= MAX_DOCTORS) {
            cout << "\n***************************************\n";
            cout << "\033[1mDoctor list full!\033[0m\n";
            cout << "\n***************************************\n";
            return;
        }
        Doctor &d = doctors[doctorCount];
        d.id = doctorCount + 1;
        cout << "Enter name: "; getline(cin, d.name);
        cout << "Enter specialization: "; getline(cin, d.specialization);
        cout << "Enter contact: "; getline(cin, d.contact);
        doctorCount++;
        cout << "\n***************************************\n";
        cout << "\033[1mDoctor added successfully!\033[0m\n";
        cout << "\n***************************************\n";
    }

void bookAppointment() {
        if(appointmentCount >= MAX_APPOINTMENTS) {
            cout << "\n***************************************\n";
            cout << "\033[1mAppointment list full!\033[0m\n";
            cout << "\n***************************************\n";
            return;
        }
        int pid, did;
        Appointment &a = appointments[appointmentCount];
        a.id = appointmentCount + 1;
        a.doctorID = getIntInput("Enter Doctor ID: ");
        cout << "Enter Date (DD/MM/YYYY): "; getline(cin, a.date);
        cout << "Enter Time (HH:MM): "; getline(cin, a.time);

        if(pid <= 0 || pid > patientCount || did <= 0 || did > doctorCount) {
            cout << "\n***************************************\n";
            cout << "\033[1mInvalid Patient or Doctor ID!\033[0m\n";
            cout << "\n***************************************\n";
            return;
        }

        a.patientID = pid;
        a.doctorID = did;
        a.status = "Scheduled";
        appointmentCount++;
        cout << "\n***************************************\n";
        cout << "\033[1mAppointment booked successfully!\033[0m\n";
        cout << "\n***************************************\n";
    }

    void generateBill() {
        if(billCount >= MAX_BILLS) {
            cout << "\n***************************************\n";
            cout << "\033[1mBill list full!\033[0m\n";
            cout << "\n***************************************\n";
            return;
        }
        int appID;
        Bill &b = bills[billCount];
        b.id = billCount + 1;
        b.appointmentID = getIntInput("Enter Appointment ID: ");
        if(appID <= 0 || appID > appointmentCount) {
            cout << "\n***************************************\n";
            cout << "Invalid Appointment ID!\n";
            cout << "\n***************************************\n";
            return;
        }
        b.appointmentID = appID;
        b.patientID = appointments[appID-1].patientID;

        cout << "Enter Amount: "; cin >> b.amount; cin.ignore();
        b.paymentStatus = "Unpaid";
        billCount++;
        cout << "\n***************************************\n";
        cout << "Bill generated successfully!\n";
        cout << "\n***************************************\n";
    }

    void addLabTest() {
        if(labTestCount >= MAX_LABTESTS) {
            cout << "\n***************************************\n";
            cout << "\033[1mLab test list full!\033[0m\n";
            cout << "\n***************************************\n";
            return;
        }
        LabTest &l = labTests[labTestCount];
        l.id = labTestCount + 1;
        l.patientID = getIntInput("Enter Patient ID: ");
        if(l.patientID <= 0 || l.patientID > patientCount) {
            cout << "\n***************************************\n";
            cout << "Invalid Patient ID!\n"; return;
            cout << "\n***************************************\n";
        }
        cout << "Enter Test Name: "; getline(cin, l.testName);
        cout << "Enter Test Date: "; getline(cin, l.testDate);
        cout << "Enter Result: "; getline(cin, l.result);
        labTestCount++;
        cout << "\n***************************************\n";
        cout << "Lab Test added successfully!\n";
        cout << "\n***************************************\n";
    }

    void prescribeMedicine() {
        if(medicineCount >= MAX_MEDICINES) {
            cout << "\n***************************************\n";
            cout << "Medicine list full!\n";
            cout << "\n***************************************\n";
            return;
        }
        Medicine &m = medicines[medicineCount];
        m.id = medicineCount + 1;
        m.patientID = getIntInput("Enter Patient ID: ");
        if(m.patientID <= 0 || m.patientID > patientCount) {
            cout << "Invalid Patient ID!\n"; return;
        }
        cout << "Enter Medicine Name: "; getline(cin, m.medicineName);
        cout << "Enter Dosage: "; getline(cin, m.dosage);
        cout << "Enter Start Date: "; getline(cin, m.startDate);
        cout << "Enter End Date: "; getline(cin, m.endDate);
        medicineCount++;
        cout << "\n***************************************\n";
        cout << "Medicine prescribed successfully!\n";
        cout << "\n***************************************\n";
    }


void showPatients() {
        cout << "\n--- Patients ---\n";
        for(int i=0; i<patientCount; i++) patients[i].displayPatientInfo();
    }
    void showDoctors() {
        cout << "\n--- Doctors ---\n";
        for(int i=0; i<doctorCount; i++) doctors[i].displayDoctorInfo();
    }
    void showAppointments() {
        cout << "\n--- Appointments ---\n";
        for(int i=0; i<appointmentCount; i++) appointments[i].displayAppointmentInfo();
    }
    void showBills() {
        cout << "\n--- Bills ---\n";
        for(int i=0; i<billCount; i++) bills[i].displayBill();
    }
    void showLabTests() {
        cout << "\n--- Lab Tests ---\n";
        for(int i=0; i<labTestCount; i++) labTests[i].displayLabTest();
    }
    void showMedicines() {
        cout << "\n--- Medicines ---\n";
        for(int i=0; i<medicineCount; i++) medicines[i].displayMedicine();
    }
};

int main(){
    Hospital h;
    int choice;
    do {
        cout << "\n\n\n***************************************\n";
        cout << "\033[1m    Hospital Management System    \033[0m\n";
        cout << "***************************************\n";
        cout << "1. Add Patient\n2. Add Doctor\n3. Book Appointment\n4. Generate Bill\n5. Add Lab Test\n6. Prescribe Medicine\n7. Show Patients\n8. Show Doctors\n9. Show Appointments\n10. Show Bills\n11. Show Lab Tests\n12. Show Medicines\n0. Exit\nEnter choice: ";
        cin >> choice; cin.ignore();

        switch(choice) {
            case 1: h.addPatient(); 
            break;
            case 2: h.addDoctor(); 
            break;
            case 3: h.bookAppointment(); 
            break;
            case 4: h.generateBill(); 
            break;
            case 5: h.addLabTest(); 
            break;
            case 6: h.prescribeMedicine(); 
            break;
            case 7: h.showPatients(); 
            break;
            case 8: h.showDoctors();
            break;
            case 9: h.showAppointments();
            break;
            case 10: h.showBills();
            break;
            case 11: h.showLabTests(); 
            break;
            case 12: h.showMedicines(); 
            break;
            case 0: cout << "Exiting...\n"; 
            break;
            default: cout << "Invalid choice!\n";
        }

    } while(choice != 0);

    return 0;
}
