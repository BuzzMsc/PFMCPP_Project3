 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>
namespace Part1eVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(float costPerGallon, double fuelAmountInGallons = 2.0, bool requiresDiesel = false);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you have 'unused parameter' warnings, you aren't using one of your function parameters in your implementation.
    Solution: use the parameter in your implementation.

    If you have 'shadows a field of <classname>' warnings, a local variable in the function has the same name as a class member.  
    This local variable could also be a function parameter with the same name as the class member.
    Solution: change the local variable's name so it is different from the class member variable's name.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 */


/*
1) Audio Interface
5 properties:
    1) brand name (std::string)
    2) number of inputs (int)
    3) number of outputs (int)
    4) has an ability to provide phantom power for each input (bool)
    5) has a volume knob (bool)
3 things it can do:
    1) convert analog signal from a microphone in digital signal
    2) send signal from input to DAW
    3) change the volume of the output signal
*/

struct AudioInterface
{
    //1) brand name (std::string)
    std::string brandName = "Native Instruments";
    //2) number of inputs (int)
    int numberOfInputs = 2;
    //3) number of outputs (int)
    int numberOfOutputs = 2;
    //4) has an ability to provide phantom power for each input (bool)
    bool abilityToProvidePhantomPowerForEachInput = true;
    //5 has a volume knob (bool)
    bool hasAVolumeKnob = true;

    //1) convert analog signal from a microphone in digital signal
    void convertAnalogToDigitalSignal();
    //2) send signal from input to DAW
    void sendToDAW();
    //3) change the volume of the output signal
    void changeOutputVolume();
};

/*
2) Automatic coffee machine
5 properties:
    1) has a milk frother (bool)
    2) number of drinks types that can be prepared (int)
    3) number of programmed coffee strength (int)
    4) has an automatic milk system cleaning program (bool)
    5) number of drinks that can be prepared in a minute (double)
3 things it can do:
    1) grind coffee beans
    2) froth the milk
    3) make a cappuccino
*/

struct AutomaticCoffeeMachine
{
    //1) has a milk frother (bool)
    bool hasMilkFrother = true;
    //2) number of drinks types that can be prepared (int)
    int numberOfDrinksTypes = 5;
    //3) number of programmed coffee strength (int)
    int numberOfProgrammedCoffeeStrength = 3;
    //4) has an automatic milk system cleaning program (bool)
    bool hasAutomaticMilkSystemCleaningProgram = true;
    //5) number of drinks that can be prepared in a minute (double)
    double numberOfDrinksPreparedPerMinute = 2.5;

    struct CoffeeBeans
    {
        //1) type of coffee beans (std::string)
        std::string type = "arabica";
        //2) type of coffee based on the origin (std::string)
        std::string typeBasedOnTheOrigin = "blend";
        //3) growing region (std::string)
        std::string growingRegion = "Ethiopia";
        //4) type of roasts (std::string)
        std::string typeOfRoasts = "dark";
        //5) content of  caffeine per cup [mg] (int)
        int contentOfCaffeinePerCupMl = 100;

        //1) import coffe beans
        void import();
        //2) check the moisture of coffe beans
        void checkTheMoisture();
        //2) roast coffee beans
        void roast();


    };
    //1) grind coffee beans
    void grindCoffeeBeans();
    //2) froth the milk
    void frothMilk();
    //3) make a cappuccino
    void makeCappuccino();
};

/*

3) Digital piano
5 properties:
    1) number of keys (int)
    2) number of pedals (int)
    3) has an ability to record while playing (bool)
    4) number of speakers (int)
    5) has a usb port (bool)
3 things it can do:
    1) play programmed rythms
    2) record while playing
    3) play demo songs
*/

struct DigitalPiano
{
    //1) number of keys (int)
    int numberOfKeys = 88;
    //2) number of pedals (int)
    int numberOfPedals = 3;
    //3) has an ability to record while playing (bool)
    bool abilityToRecordWhilePlaying = false;
    //4) number of speakers (int)
    int numberOfSpeakers = 2;
    //5) has a usb port (bool)
    bool hasUsbPort = true;

    //1) play programmed rythm
    void playProgrammedRythm();
    //2) record while playing
    void recordWhilePlaying();
    //3) play demo song
    void playDemoSong();
};

/*
4) Oven
5 properties:
    1) number of programmed temperature settings (int)
    2) number of oven racks (int)
    3) has an ability to connect via bluetooth (bool)
    4) has a temperature control (bool)
    5) has a time control (bool)
3 things it can do:
    1) heat the food
    2) defrost the food
    3) melt the chocolate
*/

struct Oven
{
    //1) number of programmed temperature settings (int)
    int numberOfProgrammedTemperatureSettings = 10;
    //2) number of oven racks (int)
    int numberOfOvenRacks = 4;
    //3) has an ability to connect via bluetooth (bool)
    bool connectViaBluetooth = false;
    //4) has a temperature control (bool)
    bool hasATemperatureControl = true;
    //5) has a time control (bool)
    bool hasATimeControl = true;

    struct OvenShelf
    {
        //1) type of oven shelf (std::string)
        std::string type = "grill";
        //2) material of oven shelf (std::string)
        std::string material = "steel";
        //3) weigh of oven shelf [g] (int)
        int weigh = 800;
        //4) width of oven shelf [mm] (int)
        int width = 474;
        //5) length of oven shelf [mm] (int)
        int length = 435;

        //1) clean oven shelf
        void clean();
        //2) place oven shelf on the oven rack
        void placeOnTheOvenRack();
        //3) change the position of the oven rack
        void changeOvenRack();
    
    };

    //1) heat the food
    void heatTheFood(int temperature);
    //2) defrost the food
    void defrostTheFood();
    //3) melt the chocolate
    void meltTheChocolate();
};

/*
5) Storage
5 properties:
    1) capacity (int)
    2) unit of transfer (int)
    3) access method (std::string)
    4) physical characteristics (std::string)
    5) physical type (std::string)
3 things it can do:
    1) store data
    2) transfer data to another memory location
    3) erase data
*/

struct Storage
{
    //1) capacity [GB] (int)
    int capacityGB = 500;
    //2) unit of transfer (double)
    double unitOfTransferMbps = 1.5;
    //3) access method (std::string)
    std::string accessMethod = "direct";
    //4) physical characteristics (std::string)
    std::string physicalCharacteristics = "Internal Hard Disk";
    //5) physical type (std::string)
    std::string physicalType = "magnetic";

    //1) store data
    void storeData (std::string dataInfo);
    //2) transfer data to another memory location
    void transferDataToAnotherMemoryLocation (std::string dataInfo, int memoryIdxToTransfer);
    //3) erase data
    void eraseData (std::string dataNameToErase);
};

/*
6) CPU
5 properties:
    1) clock speed (double)
    2) cache size (int)
    3) process size (int)
    4) number of cores (int)
    5) material (std::string)
3 things it can do:
    1) receive an instruction
    2) decode instruction
    3) execute instruction
*/

struct CPU
{
    //1) clock speed [GHZ] (double)
    double clockSpeedGhz = 2;
    //2) cache size (int)
    int cacheSize = 8;
    //3) process size [nm] (int)
    int processSizeNm = 14;
    //4) number of cores (int)
    int numberOfCores = 4;
    //5) material (std::string)
    std::string material = "aluminum";

    //1) receive an instruction
    void receiveInstruction(std::string infoName);
    //2) decode instruction
    void decodeInstruction(std::string infoName);
    //3) execute instruction
    void executeInstruction(std::string infoName);
};

/*
7) GPU
5 properties:
    1) core clock (double)
    2) memory clock (double)
    3) shader clock (double)
    4) temperature (double)
    5) GPU load (double)
3 things it can do:
    1) render 2D/3D graphics
    2) encode video
    3) compute large amount of data
*/

struct GPU
{
    //1) core clock speed [MHz] (double)
    double coreClockSpeedMHz = 1465;
    //2) memory size [GB] (int)
    double memorySize = 8;
    //3) shader clock (double)
    double shaderClock = 1465;
    //4) temperature (double)
    double temperature = 100;
    //5) GPU load (double)
    double gpuLoad = 0;

    //1) render 2D/3D graphics
    void renderGraphics();
    //2) encode video
    void encodeVideo();
    //3) compute large amount of data
    void computeData();
};

/*
8) RAM
5 properties:
    1) type (std::string)
    2) memory (int)
    3) capacity (int)
    4) number of pins (int)
    5) module speed (int)
3 things it can do:
    1) allow computer to load application
    2) allow computer browse the internet
    3) allow computer edit a spreadsheet
*/

struct RAM
{
    //1) type (std::string)
    std::string type = "DDR3";
    //2) memory [GB] (int)
    int memoryGb = 4;
    //3) color (std::string)
    std::string color = "green";
    //4) voltage (double)
    double voltage = 1.35;
    //5) module speed [MHz] (int)
    int moduleSpeedMHz = 1600;

    //1) allow computer to load application
    void allowComputerToLoadApplication();
    //2) allow computer browse the internet
    void allowComputerBrowseTheInternet();
    //3) allow computer edit a spreadsheet
    void allowComputerEditSpreadsheet();
};

/*
9) IO Ports
5 properties:
    1) number of audio ports (int)
    2) number of USB ports (int)
    3) number of HDMI ports (int)
    4) number of thunderbolt ports (int)
    5) number of ethernet ports (int)
3 things it can do:
    1) connect computer mouse
    2) connect keyboard
    3) connect monitor
*/

struct IOPorts
{
    //1) number of audio ports (int)
    int numberOfAudioPorts = 2;
    //2) number of USB ports (int)
    int numberOfUSBPorts = 5;
    //3) number of HDMI ports (int)
    int numberOfHDMIPorts = 2;
    //4) number of thunderbolt ports (int)
    int numberOfThunderboltPorts = 1;
    //5) number of ethernet ports (int)
    int numberOfEthernetPorts = 1;

    //1) connect computer mouse
    void connectComputerMouse();
    //2) connect keyboard
    void connectKeyboard();
    //3) connect monitor
    void connectMonitor();
};

/*
Thing 10) Computer
5 properties:
    1) Storage
    2) CPU
    3) GPU
    4) RAM
    5) IO Ports
3 things it can do:
    1) record sound
    2) store recordings
    3) play recorded files
*/

struct Computer
{
    //1) Storage
    Storage storageOfComputerNo1;
    //2) CPU
    CPU CPUOfComputerNo1;
    //3) GPU
    GPU GPUOfComputerNo1;
    //4) RAM
    RAM RAMOfComputerNo1;
    //5) IO Ports
    IOPorts IOPortsOfComputerNo1;

    //1) record sound
    void recordSound();
    //2) store recordings
    void storeRecordings(std::string fileName);
    //3) play recorded file
    void playRecordedFile(std::string fileName);
};


/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
