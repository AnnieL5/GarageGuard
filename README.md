# GarageGuard, guard your garage 24/7/365

### What it is

GarageGuard uses a ultrasonic sensor to detect if the garage door is open for a long period of time and makes an alerts until the door is closed.

#### What makes it unique?
It is
- Original
- Simple
- Modifiable
- Made by heart 

### Motivation / Inspiration / Problem

Have you ever had scenarios where you have opened your garage door but it is remained open the next time you checked. 

You realize...oh shoot! The door has been open overnight.

And what's even worse, that there could be animals, like rats, racoons, or even a fox inside your garage.

That's why I designed Garage Guard, your personalized, simple device that alarms you if your garage door is open.

### To use it
To properly use the tool, calibrate the constant to match the distance such that the distance from the product is smaller than the value when door closed and greater otherwise.

After inserting the battery, the device will beep when the door is open for a set period of time.

## Wiring Diagram
![alt text](docs/images/image1.jpg)

## Code example
Go checkout the example code in firmware/GarageGuard and upload it onto the arduino pro mini

For how to upload code onto arduino pro mini using arduino uno, check out https://www.instructables.com/How-to-Program-Arduino-Pro-Mini-Using-Arduino-UNO/

### Image of PCB

![alt text](docs/images/image.png)

### Image of Wiring Schematic

![alt text](docs/images/image-1.png)

### Image of CAD assembly (without lid)
![alt text](docs/images/view2.jpg)

### Image of CAD assembly (with lid)
![alt text](docs/images/view1.jpg)
![alt text](docs/images/view1.5.jpg)

## BOM / Parts Breakdown

| Product name          | Product Description                          | Amount | Unit Price | Shipping Fee | Total Price | Link                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |
|-----------------------|----------------------------------------------|--------|------------|--------------|-------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Ultrasonic sensor     | HC-SR04 3.3-5VNew version                    | 1      | $2.71      |              | $2.71       | https://www.aliexpress.com/item/1005005467178145.html?spm=a2g0o.productlist.main.2.48981450ohptjN&algo_pvid=74ad5a5d-34d5-4956-b985-ef5a75be59a3&algo_exp_id=74ad5a5d-34d5-4956-b985-ef5a75be59a3-1&pdp_ext_f=%7B%22order%22%3A%2210615%22%2C%22spu_best_type%22%3A%22price%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21CAD%212.71%212.71%21%21%211.94%211.94%21%40210328df17774096350383208e9e52%2112000033197296308%21sea%21CA%216218818596%21X%211%210%21n_tag%3A-29919%3Bd%3A26a99932%3Bm03_new_user%3A-29895&curPageLogUid=PazbM33tgsR5&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005005467178145%7C_p_origin_prod%3A |
| Passive Buzzer        | 10PCS Passive Buzzer Kits 12085              | 1      | $2.79      |              |  NA         |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
|                       |                                              |        |            |              |             |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| Arduino Pro Mini      | ÊATMEGA328P 3.3V 8MHz                        | 1      | $6.14      |              | $6.14       | https://www.aliexpress.com/item/1005009384358010.html?spm=a2g0o.detail.0.0.3d69kxh4kxh4TT&mp=1&pdp_npi=6%40dis%21CAD%21CAD+12.34%21CAD+6.19%21%21CAD+6.19%21%21%21%402101e2b217772431183538792e7ffd%2112000048937356319%21ct%21CA%216218818596%21%211%210%21                                                                                                                                                                                                                                                                                                                                                                                                                    |
| AA Battery            |                                              | 1      |  NA        |              |             |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| THT Battery Holder    | 14500 Battery Box With Pins 1AA 1.5V         | 1      | $0.33      | $7.48        | $0.33       | https://www.aliexpress.com/item/1005005620966310.html?spm=a2g0o.cart.0.0.358a38dadNcuNR&mp=1&pdp_npi=6%40dis%21CAD%21CAD+0.38%21CAD+0.32%21%21CAD+0.32%21%21%21%402101eee917774109006605329ec0dc%2112000033776650718%21ct%21CA%216218818596%21%215%210%21                                                                                                                                                                                                                                                                                                                                                                                                                       |
| Voltage Regulator     | 0.8V-5V to 3V 3.3V 5V Boost Voltage Regulate | 1      | $3.85      |              | $3.85       | https://www.aliexpress.com/item/1005006167931077.html?spm=a2g0o.detail.0.0.4a7cjdtRjdtRpQ&mp=1&pdp_npi=6%40dis%21CAD%21CAD+3.96%21CAD+3.86%21%21CAD+3.86%21%21%21%402101d6ff17773444964128610e94da%2112000036084126229%21ct%21CA%216218818596%21%211%210%21                                                                                                                                                                                                                                                                                                                                                                                                                     |
|                       |                                              |        |            |              |             |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| m3 self-tapping screw | ZONSANTA M3x50pc 5mm                         | 1      | $2.79      |              | $2.79       | https://www.aliexpress.com/item/4000982209705.html?spm=a2g0o.productlist.main.2.5e0a5049GO2c6k&algo_pvid=d9d1041d-5b82-4d1d-adb8-2c50ae22e721&algo_exp_id=d9d1041d-5b82-4d1d-adb8-2c50ae22e721-1&pdp_ext_f=%7B%22order%22%3A%2214058%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21CAD%212.04%211.99%21%21%211.46%211.42%21%40210328d417774091351247794e1c13%2110000013191635027%21sea%21CA%216218818596%21X%211%210%21n_tag%3A-29919%3Bd%3A26a99932%3Bm03_new_user%3A-29895&curPageLogUid=Y5TAugc4ns7L&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A4000982209705%7C_p_origin_prod%3A                                           |
| head pins             | 5 male 5 female                              | 1      | $5.19      |              | $5.19       | https://www.aliexpress.com/item/1005007235591794.html?spm=a2g0o.cart.0.0.31e138dackOqlz&mp=1&sourceType=570&pdp_npi=6%40dis%21CAD%21CAD+16.72%21CAD+5.19%21%21CAD+5.19%21%21%21%402103119c17773470443845760e9623%2112000039908542823%21ct%21CA%216218818596%21%211%210%21&pdp_ext_f=%7B%22cart2PdpParams%22%3A%7B%22sourceType%22%3A%22570%22%2C%22cartSource%22%3A%22main%22%7D%7D                                                                                                                                                                                                                                                                                             |
|                       |                                              |        |            |              |             |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| Total                 |                                              |        |            |              | $23.30      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
