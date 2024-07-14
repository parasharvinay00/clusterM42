{
    Sedan,
    Hatchback,
    SUV,
    Wagon};

ECarTypes GetPreferredCarType()
{
    return ECarTypes::Hatchback;
}

// As of C++11 there is an easy way to assign a type to the enum which can be
// useful in serialization of data and converting enums back-and-forth between
// the desired type and their respective constants
enum ECarTypes : uint8_t
{
    Sedan,     // 0
    Hatchback, // 1
    SUV = 254, // 254
    Hybrid     // 255
};
