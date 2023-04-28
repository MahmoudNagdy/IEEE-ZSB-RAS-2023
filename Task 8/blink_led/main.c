#include "../LIB/BIT_MATH.h"
#include "../LIB/STD_TYPES.h"
#include <util/delay.h>

#include "../MCAL/DIO/DIO_Interface.h"
#include "../MCAL/DIO/DIO_Config.h"

int main(void)
{
    DIO_u8SetPinDirection(1, 0, 1);

    while (1)
    {
        DIO_u8SetPinValue(1, 0, 1);
        _delay_ms(50);

        DIO_u8SetPinValue(1, 0, 0);
        _delay_ms(50);
    }

    return 0;
}
