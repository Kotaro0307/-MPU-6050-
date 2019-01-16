#include "mbed.h"
#include "MPU6050.h"

int main(void)
{
    MPU6050 mpu6050;
    
    mpu6050.SetUp_MPU6050();
    
    while(1) {
        mpu6050.MPU6050_Start();
        pc.printf("%.5f\n\r", yaw);
    }
}