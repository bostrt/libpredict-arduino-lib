This is a really rough start to a port of [libpredict](https://github.com/la1k/libpredict/) to Arduino platform. Currently only known working MCU is Arm Cortex-M0 ([Adafruit Feather M0](https://www.adafruit.com/product/2772))

- No SDP4 support (focus on near nearth objects)
- Contains change from https://github.com/la1k/libpredict/pull/79 due to lack of `time(NULL)` support on Cortex-M0 (it is [semihosted](http://infocenter.arm.com/help/index.jsp?topic=/com.arm.doc.dui0205g/Bgbjjgij.html)).
