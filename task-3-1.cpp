#include <iostream>
#include <math.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
using namespace std;

float startingHeightValue,
timePeriods;
int iterationsForDataOutput;
const float gravityConst = 9.81,
timeBetweenIterations = 0.00002;

float getValue(string);
void calculateTraectory();
float speedFormula(float, float);
float heightFormula(float);
bool isNeededToPrintData(int);
void printTableNames();
void printData(float, float);

int main()
{
    startingHeightValue = getValue("startingHeightValue");
    timePeriods = getValue("timePeriods");
    iterationsForDataOutput = timePeriods/timeBetweenIterations;
    calculateTraectory();
    return 0;
}

float getValue(string varName)
{
    float varValue;
    
    if (varName == "startingHeightValue")
    {
        cout << "Please enter starting point height value: ";
    } else if (varName == "timePeriods")
    {
        cout << "Please enter time period duration between two calculating iterations (in seconds): ";
    }
    else
    {
        cout << "An error has occured. Unknown type of variable\n";
    }
    cin >> varValue;
    cout << "\n";
    return varValue;
}

void calculateTraectory()
{
    float iterationTimeElapsed = 0,
    totalTimeElapsed = 0,
    currentSpeed = 0 ,
    iterationStartSpeed = 0,
    currentHeight = startingHeightValue;
    int iterationsSinceDataOutput = 0;
    
    printTableNames();
    while (currentHeight > 0)
    {
        currentHeight = heightFormula(iterationTimeElapsed);
        iterationTimeElapsed += timeBetweenIterations;
        totalTimeElapsed += timeBetweenIterations;
        currentSpeed = speedFormula(iterationStartSpeed, iterationTimeElapsed);
        if (isNeededToPrintData(iterationsSinceDataOutput))
        {
            printData(currentHeight, currentSpeed);
            iterationsSinceDataOutput = 0;
        }
        iterationsSinceDataOutput++;
    }
}

float heightFormula(float time)
{
    float height = startingHeightValue - (gravityConst * pow(time, 2)) / 2;
    return height;
}

float speedFormula(float initialSpeed, float time)
{
    float speed = initialSpeed - gravityConst * time;
    return speed;
}

bool isNeededToPrintData(int iterationsElapsed)
{
    if (iterationsElapsed == iterationsForDataOutput)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void printTableNames()
{
    cout << "Height   Speed\n";
}

void printData(float height, float speed)
{
    cout << height << "   " << speed << "\n";
}
