#include <uuid>
struct CustomerData {
uuid_t uuid; // Customer 128 bit key
char[32] name; // Customer name (char is 1 byte each) uint32_t ytd_sales; // Customer year to date sales
};

