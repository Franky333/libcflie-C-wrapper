#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "CCrazyRadioWrapper.h"
#include "CCrazyflieWrapper.h"

int main()
{
    CCrazyRadioWrapped *crRadio = NULL;
    crRadio = newCCrazyRadio("radio://0/27/2M");

    if(CCrazyRadio_startRadio(crRadio))
    {
        printf("Connection with Crazyradio established!\n");
    }
    else
    {
        printf("Could not connect to dongle. Did you plug it in? exiting.\n");
        exit(EXIT_FAILURE);
    }

    CCrazyflieWrapped *cfn = NULL;
    cfn = newCCrazyflie(crRadio);

    CCrazyflie_SendSetpoints(cfn,1);


    while(1)
    {
        if(!CCrazyflie_cycle(cfn))
        {
            printf("CfnCtrlThread: cycle() not sucessfull. exiting\n");
            exit(EXIT_FAILURE);
        }

        printf("roll: %.1f pitch: %.1f\n",CCrazyflie_roll(cfn),CCrazyflie_pitch(cfn));

        usleep(10000);
    }

    return 0;
}

