# Project Report
# Requirements
## Introduction
The project is “Restaurant Billing System” software for monitoring and controlling the transactions in a Restaurant. The project Restaurant Billing System is developed on C programming language which mainly focuses on basic operation in a Restaurant like – select Order, view Order, adding new member, generate Bill, calculate Discount and Tax, generate report. Restaurant Billing System is a windows application designed to help users maintain & organize Restaurant. This application is easy to use for both beginners & advanced users. It features a familiar and well thought – out, an attractive user interface, combined with strong searching, insertion & deletion capabilities.
## Crucial Features of a Restaurant Billing System
For a restaurant’s billing software to function right, it needs certain crucial features that can help make it a success. And, now that you know what a billing system for a restaurant is all about, here are some key features that make the software a necessity for every restaurant.
1. Cloud Data Storage
- The restaurant billing software will store all the data on the cloud, from customer information to performance reports. Further, cloud storage will allow you to store data without the chance of losing it. Data storage if therefore, quicker and safer through the software.
2. Automated Reports
- A billing system ensures the elimination of excessive manual intervention, and this also applies to the performance reports to keep track of the business’ growth. The software ensures automated report generation that you can view on your dashboard to keep track of how well the business is performing. This reduces the time you would otherwise have to spend.
3. All-Round Management
- Your restaurant billing software can not only manage the billing aspect of the business but also manage orders, taxes, performance tracking, and more, all through a single software.
4. Multiple Payment Modes
- Unlike restaurants with a lack of technology, a restaurant billing system allows multiple payment modes that make it convenient for both, customers and restaurateur. With newer payment apps being introduced, this is all the more vital.
5. Offline Operation
- While the software may need access to the internet in order to store data, it can also operate offline without a glitch. In case of power failures or no access to the internet, the system can restore the cloud storage once online, making it convenient and efficient during all times.
6. 24*7 Support
- While you may run your restaurant within a set time limit, your billing software can carry out conversations through chatbots in order to convey crucial information to the customers. You can provide round-the-clock support or choose to be available for a little more than the official open hours.
## SWOT Analysis
#### Strengths
- Efficiency in Inventory Management
- Ease of Performance Tracking
- Anytime Access to the System
- Management of Takeaways and Deliveries
- Handling Restaurant Marketing
#### Weaknesses
- It is not cost-effective for small scale business owners.
- Invoices can go into spam folders due to flagging by email servers; that leads to delay of payments.
- Automatic invoices and management system reduces human mediation, which reduces personal touch for the business.
- Irregularity of updates can lead to hardships and hassles between purchases and credits.
#### Opportunities
- Billing software will be linked not only to the kitchens, facilitating faster order turn arounds, but also link to marketing set-up, analytics, feedback & loyalty systems. 
- One single system that takes care of the bulk of your operations and also integrates all revenue generating functions. 
#### Threats
- Competitors providing more “value add”
- Poor ratings on review websites
## 4W's and 1'H
#### Who :
Managing a restaurant can be a daunting task. With the right software to help you out, operating it can become effortless. The emergence of restaurant billing systems has made life easier for everyone in the restaurant industry.
#### What :
A restaurant billing software allows ease of billing transactions to make the process simpler and quicker. However, that is not all that the software does. The right software can help you deal with a number of things such as managing orders and inventories, tracking the sales and performance of the business, storing customer data for marketing purposes, and much more.
#### When :
A billing system in place ensures the elimination of any excess manual intervention. It also applies to the performance reports to keep track of the overall growth of your restaurant business. Restaurant billing software lets you can keep track of your restaurant's growth.
#### Where :
At its most basic definition, a billing system is the process by which a business bills and invoices customers. Billing systems often include payment software that automates the process of collecting payments, sending out recurring invoices, expense tracking, and invoice tracking.
#### How :
Every key feature of a billing system comes with its own perk that can take a restaurant’s business up another notch. Whether your restaurant business is a small one or one that has gained popularity among its customers, billing software is sure to help your restaurant in more ways than one.
## Detail Requirements
#### High Level Requirements
| ID |           Description     |    Status   |
| -- | ------------------------- | ----------- |
| 1. | Add New Customer details  | Implemented |
| 2. | Add New Item names        | Implemented |
| 3. | Generate Invoice including GST | Implemented |
#### Low Level Requirements
| ID |        Description        |    Status   |
| -- | ------------------------- | ----------- |
| 1. | Search Invoice for a particular Customer | Implemented |
| 2. | Show all Invoice          | Implemented |


# Behavioural Diagram
![Flow Chart](https://user-images.githubusercontent.com/94313525/142740070-a96050e0-4583-4ebc-887d-4c91bdfb709f.png)

# Structural Diagram
![Structural Diagram](https://user-images.githubusercontent.com/94313525/142759615-62a3be38-c9a2-4c78-bbae-bb6078bd2de6.png)


# TEST PLAN:
### Table no: High level test plan
| Test ID |           Description       |      Exp I/P    |    Exp O/P   |   Actual Out  |   Type Of Test |
| --------| --------------------------- | --------------- | ------------ | ------------- | -------------- |
|  H_01   | Add new customer details    |  Abcdefgh       |    Accept    |   As Expected | Requirement Based |
|  H_02   |    Add new items            |  123,abcdefgh   |    Display   |   As Expected | Requirement Based |
|  H_03   | Generating Invoice Including GST| 245645      |    Display   |   As Expected | Requirement Based |

### Table no: Low level test plan
| Test ID |           Description       |      Exp I/P    |    Exp O/P   |   Actual Out  |   Type Of Test |
| --------| --------------------------- | --------------- | ------------ | ------------- | -------------- |
|  L_01   | Search Invoice for a particular customer | Choice | Display  | As Expected   | Requirement Based |
|  L_02   | Show all Invoices           |    Choice       |    Display   | As Expected  | Requirement Based |
|  L_03   |    Invoice Saved            |    Choice     |  Display       |  Success     | Requirement Based |


## Output Images
Step 1: Please select your prefered operation which has to be perform. Eg. Your choice : 1 (As shown in below Image)

<img width="371" alt="Image_1" src="https://user-images.githubusercontent.com/94313525/143381479-1b133749-376b-412d-86bc-3f9c4f166585.png">

Step 2: Please enter the name of the customer & order details.

<img width="360" alt="Image_2" src="https://user-images.githubusercontent.com/94313525/143382506-a59b8069-5c98-435c-8514-68a2cf8cddd2.png">

Step 3: It  will display the Genearted Invoice of the Customer. And also it will ask you to save the invoice. Further it asks you to perform another operation.

<img width="344" alt="Image_3" src="https://user-images.githubusercontent.com/94313525/143384075-07ae0c9b-a31a-4c75-abfb-6fa0a071dd2d.png">

Step 4: For Second operation it shows your previous Invoices.

<img width="287" alt="Image_4" src="https://user-images.githubusercontent.com/94313525/143384457-39fc0a20-8d62-4d6e-896d-d8eaef0e9829.png">

Step 5: For Third operation it shows the Invoice of a particular customer which is already generated in the database.

<img width="352" alt="Image_5" src="https://user-images.githubusercontent.com/94313525/143386267-2b60e126-c0e0-4319-99ee-3fe20eb63bb5.png">

Step 6: Fourth operation shows the exit from the operations. Eg. Bye Bye :)

# Output Video

https://user-images.githubusercontent.com/94313525/143388332-0ab9c4b6-4b45-495a-8f4e-058908151f46.mp4





    
    






