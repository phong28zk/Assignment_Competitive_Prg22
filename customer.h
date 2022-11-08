#ifndef _CUSTOMER_H
#define _CUSTOMER_H
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

#define FILE_PATH "D:\\4.Code\\ASG_CP22\\data1.txt"
class Customer
{
    private:
        string ID;
        string name;
        string phone;
        string email;
        string bill;
        string currency;
        string service;
        string feedback;
        string address;
    public:
        Customer();
        Customer(string ID, string name, string email, string phone, string bill, string currency, string service, string feedback, string address);
        ~Customer();
        
        void setID(string ID);
        void setName(string name);
        void setPhone(string phone);
        void setEmail(string email);
        void setBill(string bill);
        void setCurrency(string currency);
        void setService(string service);
        void setFeedback(string feedback);
        void setAddress(string address);

        string getID();
        string getName();
        string getPhone();
        string getEmail();
        string getBill();
        string getCurrency();
        string getService();
        string getFeedback();
        string getAddress();
};
unsigned long long BillStr_to_int(string bill);                                                       
void ValidateEmail(string email);                                    
void AddCustomer(vector<Customer> &customers);                                 
void quickSort(vector<Customer> &customer, int left, int right);                                         
void swap(Customer &a, Customer &b);                                                                  
int partitionAsc(vector<Customer> &customer, int left, int right);                                        
int partitionDesc(vector<Customer> &customer, int left, int right);                                       
long long searchCustomer(vector<Customer> &customer, string bill);                                     
long long SortBill(vector<Customer> &customer, int left, int right, string bill);                         
void ExchangeCurrency();                                                                                         
#endif