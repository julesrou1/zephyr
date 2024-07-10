.. _2111D1Z_test:

ADIN2111D1Z testing script
###########

Overview
********

Sample created to test the porting of the ADIN2111D1Z. Uses the UART, GPIO and SPI.

Building and Running
********************

west build -p -b adi_eval_adin2111d1z/max32690/m4 samples/2111d1z_test/

west flash --openocd="/home/jules/MaximSDK/Tools/OpenOCD/openocd"

Sample Output
=============

.. code-block:: console

    [00:00:00.068,000] <inf> adi_adin2111_phy: PHY 1 ID 283BCA1
    [00:00:00.076,000] <inf> adi_adin2111_phy: PHY 1 2.4V mode supported
    [00:00:00.085,000] <inf> adi_adin2111_phy: PHY 2 ID 283BCA1
    [00:00:00.093,000] <inf> adi_adin2111_phy: PHY 2 2.4V mode supported
    [00:00:00.101,000] <wrn> net_if: You have 1 IPv6 net_if addresses but 2 network interfaces
    [00:00:00.109,000] <wrn> net_if: Consider increasing CONFIG_NET_IF_MAX_IPV6_COUNT value.
    *** Booting Zephyr OS build eaab066c2e73 ***
    Bypass relay pin is HIGH
    adin2111@0: device ready.
    SPI frequency : 25000000
    Read from SPI transcieve : 0 
    Orange and Red leds are: OFF. Green led is ON.
    Orange and Red leds are: ON. Green led is OFF.



