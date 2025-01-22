#include <iostream>
#include <string>
using namespace std;

// Structure to store hospital details
struct Hospital {
    string name;
    string doctor;
    string nurse;
    string location;
    string contactno;
    string ambulancecontact;
    string appointmentTime;
};

// Predefined list of diseases and hospital details
const int Diseases_count = 4;
string diseases[Diseases_count] = {"fever", "coronary artery", "pneumonia", "diabetes and hormonal"};
Hospital hospitals[Diseases_count] = {
    {"D Type Hospital Latamber", "Dr Waqar", "Sister Sarah", "091-233 666 888", "03439068213", "9:00 AM to 2:00 PM"},
    {"Peshawar General Hospital", "Dr Momin Salahuddin", "Sister Ayesha", "091-111 111 091", "091-5882000", "9:00 AM to 5:00 PM"},
    {"Northwest General Hospital", "Dr Muhammad Asim", "Sister Azka", "091-111 583 880", "091-111 583 880", "8:00 AM to 2:00 PM"},
    {"Hayatabad Medical Complex", "Dr Tahir Ghaffar", "Sister Maina", "091-9217140-47", "091-9217140-7", "4:00 PM to 8:00 PM"}
};

// Function to display diseases
void displayDiseases() {
    cout << "List of Diseases:\n";
    for (int i = 0; i < Diseases_count; i++) {
        cout << i + 1 << ". " << diseases[i] << endl;
    }
}

// Function to display hospital details
void displayHospitalDetails(int diseasesIndex) {
    if (diseasesIndex < 0 || diseasesIndex >= Diseases_count) {
        cout << "Invalid disease index!" << endl;
        return;
    }

    Hospital hospital = hospitals[diseasesIndex];
    cout << "\nNearest Hospital Details:\n";
    cout << "Hospital Name: " << hospital.name << endl;
    cout << "Doctor: " << hospital.doctor << endl;
    cout << "Nurse: " << hospital.nurse << endl;
    cout << "Location: " << hospital.location << endl;
    cout << "Contact No: " << hospital.contactno << endl;
    cout << "Ambulance Contact: " << hospital.ambulancecontact << endl;
    cout << "Appointment Time: " << hospital.appointmentTime << endl;
}

int main() {
    string patientName;
    int diseasesChoice;

    // Step 1: Ask for the patient's name
    cout << "Enter your name: ";
    getline(cin, patientName);

    // Step 2: Display the list of diseases
    displayDiseases();

    // Step 3: Patient selects a disease
    cout << "\nEnter the number corresponding to your disease: ";
    cin >> diseasesChoice;

    if (diseasesChoice >= 1 && diseasesChoice <= Diseases_count) {
        cout << "\nHello, " << patientName << "!" << endl;
        cout << "You selected: " << diseases[diseasesChoice - 1] << endl;

        // Step 4: Display hospital details
        displayHospitalDetails(diseasesChoice - 1);
    } else {
        cout << "Invalid choice! Please try again." << endl;
    }

    return 0;
}

