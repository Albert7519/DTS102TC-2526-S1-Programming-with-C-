#include <iostream>
#include <fstream> // Include fstream for file operations
using namespace std;

// Function to read data from weather.txt into the 3D array
void readWeatherData(double data[][24][2], int numDays, int numHours) {
    ifstream inputFile("weather.txt"); // Open the file

    // Check if the file was opened successfully
    if (!inputFile.is_open()) {
        cerr << "Error: Unable to open file weather.txt" << endl;
        exit(1); // Exit program with error code
    }

    int day, hour;
    double temperature, humidity;
    // Read data for each hour of each day
    for (int k = 0; k < numDays * numHours; k++) {
        inputFile >> day >> hour >> temperature >> humidity;
        // Store data in the array (adjusting for 0-based index)
        data[day - 1][hour - 1][0] = temperature;
        data[day - 1][hour - 1][1] = humidity;
    }

    inputFile.close(); // Close the file
}

int main()
{
    const int NUMBER_OF_DAYS = 10;
    const int NUMBER_OF_HOURS = 24;
    double data[NUMBER_OF_DAYS][NUMBER_OF_HOURS][2];

    // Call the function to read data from weather.txt
    readWeatherData(data, NUMBER_OF_DAYS, NUMBER_OF_HOURS);

    // Find the average daily temperature and humidity
    for (int i = 0; i < NUMBER_OF_DAYS; i++)
    {
        double dailyTemperatureTotal = 0, dailyHumidityTotal = 0;
        for (int j = 0; j < NUMBER_OF_HOURS; j++)
        {
            dailyTemperatureTotal += data[i][j][0];
            dailyHumidityTotal += data[i][j][1];
        }

        // Display result
        cout << "Day " << (i + 1) << "'s average temperature is " // Corrected day number to 1-based
            << dailyTemperatureTotal / NUMBER_OF_HOURS << endl;
        cout << "Day " << (i + 1) << "'s average humidity is " // Corrected day number to 1-based
            << dailyHumidityTotal / NUMBER_OF_HOURS << endl;
    }

    return 0;
}