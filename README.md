# Lazy-door-opener
So many damn stairs to walk each time I have to open my front door. So needed to fix my laziness :)


## Reason
So my roommates wanted to open the door from above, but the cord is long and heavy to pull, so I wanted to make it easier.
Need to make it monkey proof so they can't destroy it.

## Current components:
1. Arduino NANO
2. 5V DC gear motor
3. 5V Battery
4. NPN transistor (BC517 of BC550)

## How it works:
I will use a Arduino Nano in the beginning, will see if I change it in the future.
Place a button all the way up, first adition by a cabble, maby later wireless. Need to check for that.
If button is pressed a small engine will pull the cord. Cord is maintained with pulley's to make it less heavy. (Need to calculate how much rope I need to pull).
With a little "spool" I will pull the cord with the engine.
The engine works with 5V, so I will connect an extra energy supply.

## Software package:
I used PlatformIO to upload code to the NANO. With this I can pretty much connect to all micro controllers. 