#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <fstream>
using namespace std;
class flight_supp
{
public:
    int price;
    string airline, dep, arrival;
    flight_supp(string airline, string dep, string arrival, int price)
    {
        this->airline = airline;
        this->dep = dep;
        this->arrival = arrival;
        this->price = price;
    }
    void get_details()
    {
        cout << airline << " " << dep << "(Dep) " << arrival << "(Arrival) "
             << " rs." << price << "\n\n";
    }
};
class flight
{
public:
    string c_airline, c_dep, c_arr;
    int price;
    flight_supp dtm[5] = {flight_supp("Spicejet", "12:20", "14:30", 3500), flight_supp("AirAsia", " 12:25", "14:55", 4300), flight_supp("Indigo ", "12:25 ", "14:55 ", 2900), flight_supp("Vistra ", "12:25 ", "14:55 ", 3800), flight_supp("Kingfisher", "01:25", "02:55", 5000)};
    flight_supp dtg[4] = {flight_supp("Kingfisher", "02:50", "04:30", 4836), flight_supp("AirAsia", " 14:30", "17:50", 7200), flight_supp("Vistra ", "13:22 ", "17:32 ", 4780), flight_supp("Spicejet", "08:00", "09:00", 2500)};
    flight_supp dtb[5] = {flight_supp("Spicejet", "01:00", "03:10", 4000), flight_supp("AirAsia", " 14:45", "16:45", 1490), flight_supp("Indigo ", "18:20 ", "21:17 ", 3700), flight_supp("Vistra ", "03:45 ", "05:20 ", 5236), flight_supp("Kingfisher", "05:10", "07:50", 7899)};
    flight_supp dtp[5] = {flight_supp("Indigo ", "09:15 ", "11:20 ", 4625), flight_supp("Vistra ", "05:15 ", "07:10 ", 8945), flight_supp("AirAsia", " 08:00", "11:30", 8640), flight_supp("Spicejet", "03:30", "05:00", 6700), flight_supp("Kingfisher", "07:15", "09:30", 1455)};
    flight_supp dth[5] = {flight_supp("Spicejet", "02:30", "04:30", 2400), flight_supp("AirAsia", " 09:55", "12:00", 9000), flight_supp("Kingfisher", "09:10", "10:40", 7855), flight_supp("Indigo ", "11:50 ", "13:10 ", 4230), flight_supp("Vistra ", "08:20 ", "10:50 ", 1469)};
    flight_supp dtc[5] = {flight_supp("AirAsia", " 12:25", "14:55", 4932), flight_supp("Spicejet", "04:10", "05:15", 7300), flight_supp("Indigo ", "03:40 ", "05:35 ", 6780), flight_supp("Vistra ", "10:15 ", "12:15 ", 7500), flight_supp("Kingfisher", "11:15", "13:40", 4100)};
    flight_supp dtk[4] = {flight_supp("Kingfisher", "17:10", "19:12", 1699), flight_supp("Spicejet", "13:00", "16:30", 9500), flight_supp("AirAsia", " 07:05", "10:15", 8639), flight_supp("Indigo ", "09:10 ", "12:10 ", 8452)};

    flight_supp mtg[5] = {flight_supp("AirAsia", " 12:25", "14:55", 4300), flight_supp("Spicejet", "12:20", "14:30", 3500), flight_supp("Indigo ", "12:25 ", "14:55", 7541), flight_supp("Vistra ", "12:25 ", "14:55 ", 6955), flight_supp("Kingfisher", "01:25", "02:55", 5000)};
    flight_supp mtb[5] = {flight_supp("Spicejet", "14:10", "16:50", 2500), flight_supp("Vistra ", "15:20 ", "18:45 ", 4700), flight_supp("AirAsia", " 14:10", "16:05", 5400), flight_supp("Indigo ", "17:50 ", "19:20 ", 5000), flight_supp("Kingfisher", "02:15", "03:40", 4825)};
    flight_supp mtp[5] = {flight_supp("Spicejet", "15:00", "18:45", 8400), flight_supp("AirAsia", " 17:20", "19:15", 6900), flight_supp("Indigo ", "20:15 ", "22:18 ", 1469), flight_supp("Vistra ", "20:10 ", "22:55 ", 3900), flight_supp("Kingfisher", "05:40", "07:10", 9100)};
    flight_supp mth[4] = {flight_supp("Indigo ", "07:10 ", "09:20 ", 4790), flight_supp("Spicejet", "01:00", "03:30", 6973), flight_supp("Vistra ", "04:30 ", "06:15 ", 2800), flight_supp("Kingfisher", "13:50", "15:20", 7465)};
    flight_supp mtc[5] = {flight_supp("Spicejet", "04:00", "06:15", 4800), flight_supp("AirAsia", " 03:20", "05:02", 1560), flight_supp("Indigo ", "10:30 ", "12:15 ", 8974), flight_supp("Vistra ", "08:50 ", "10:20 ", 5933), flight_supp("Kingfisher", "16:10", "18:20", 4320)};
    flight_supp mtk[4] = {flight_supp("AirAsia", " 07:20", "09:15", 3600), flight_supp("Vistra ", "11:50 ", "13:10 ", 7845), flight_supp("Spicejet", "07:25", "08:55", 4923), flight_supp("Kingfisher", "19:30", "21:10", 3800)};

    flight_supp gtb[4] = {flight_supp("Spicejet", "02:30", "04:30", 2400), flight_supp("Indigo ", "11:50 ", "13:10 ", 4230), flight_supp("Vistra ", "08:20 ", "10:50 ", 1469), flight_supp("Kingfisher", "09:10", "10:40", 3250)};
    flight_supp gtp[2] = {flight_supp("AirAsia", " 14:30", "17:50", 7200), flight_supp("Indigo ", "15:45 ", "17:55 ", 1400)};
    flight_supp gth[5] = {flight_supp("Spicejet", "01:00", "03:10", 4000), flight_supp("AirAsia", " 14:45", "16:45", 1490), flight_supp("Indigo ", "18:20 ", "21:17 ", 3700), flight_supp("Vistra ", "03:45 ", "05:20 ", 5236), flight_supp("Kingfisher", "05:10", "07:50", 5010)};
    flight_supp gtc[4] = {flight_supp("AirAsia", " 07:05", "10:15", 8639), flight_supp("Indigo ", "09:10 ", "12:10 ", 8452), flight_supp("Vistra ", "12:05 ", "14:50 ", 9547), flight_supp("Kingfisher", "17:10", "19:12", 7400)};
    flight_supp gtk[4] = {flight_supp("AirAsia", " 12:25", "14:55", 4300), flight_supp("Indigo ", "12:25 ", "14:55 ", 2900), flight_supp("Vistra ", "12:25 ", "14:55 ", 3800), flight_supp("Kingfisher", "01:25", "02:55", 9255)};

    flight_supp btp[4] = {flight_supp("Spicejet", "15:00", "18:45", 8400), flight_supp("AirAsia", " 17:20", "19:15", 6900), flight_supp("Indigo ", "20:15 ", "22:18 ", 1469), flight_supp("Kingfisher", "05:40", "07:10", 9100)};
    flight_supp bth[5] = {flight_supp("Indigo ", "12:25 ", "14:55 ", 3290), flight_supp("Spicejet", "07:25", "08:55", 4923), flight_supp("AirAsia", " 07:20", "09:15", 3600), flight_supp("Vistra ", "11:50 ", "13:10 ", 7845), flight_supp("Kingfisher", "19:30", "21:10", 3800)};
    flight_supp btc[5] = {flight_supp("Spicejet", "04:00", "06:15", 4800), flight_supp("AirAsia", " 03:20", "05:02", 1560), flight_supp("Indigo ", "10:30 ", "12:15 ", 8974), flight_supp("Vistra ", "08:50 ", "10:20 ", 5933), flight_supp("Kingfisher", "16:10", "18:20", 4320)};
    flight_supp btk[5] = {flight_supp("Vistra ", "15:20 ", "18:45 ", 4700), flight_supp("Spicejet", "14:10", "16:50", 2500), flight_supp("AirAsia", " 14:10", "16:05", 5400), flight_supp("Indigo ", "17:50 ", "19:20 ", 5000), flight_supp("Kingfisher", "02:15", "03:40", 4825)};

    flight_supp pth[3] = {flight_supp("Indigo ", "11:50 ", "13:10 ", 4230), flight_supp("Vistra ", "08:20 ", "10:50 ", 1469), flight_supp("Kingfisher", "09:10", "10:40", 4233)};
    flight_supp ptc[3] = {flight_supp("Spicejet", "12:20", "14:30", 3500), flight_supp("Vistra ", "12:25 ", "14:55 ", 6955), flight_supp("Kingfisher", "01:25", "02:55", 6823)};
    flight_supp ptk[4] = {flight_supp("Spicejet", "01:00", "03:10", 4000), flight_supp("AirAsia", " 14:45", "16:45", 1490), flight_supp("Indigo ", "18:20 ", "21:17 ", 3700), flight_supp("Kingfisher", "05:10", "07:50", 5910)};

    flight_supp htc[1] = {flight_supp("Kingfisher", "01:25", "02:55", 5200)};
    flight_supp htk[5] = {flight_supp("Spicejet", "15:00", "18:45", 8400), flight_supp("AirAsia", " 17:20", "19:15", 6900), flight_supp("Indigo ", "20:15 ", "22:18 ", 1469), flight_supp("Vistra ", "20:10 ", "22:55 ", 3900), flight_supp("Kingfisher", "05:40", "07:10", 9100)};

    flight_supp ctk[5] = {flight_supp("AirAsia", " 07:20", "09:15", 3600), flight_supp("Spicejet", "07:25", "08:55", 4923), flight_supp("Indigo ", "12:25 ", "14:55 ", 3290), flight_supp("Vistra ", "11:50 ", "13:10 ", 7845), flight_supp("Kingfisher", "19:30", "21:10", 3800)};
    void put_flight(string src, string des);
};
void flight::put_flight(string src, string des)
{
    if (src == "Delhi" && des == "Mumbai" || des == "Delhi" && src == "Mumbai")
    {
        cout << "Choose from below\n";
        for (int i = 0; i < 5; i++)
        {
            cout << i + 1 << " ";
            dtm[i].get_details();
        }
        int option;
        cin >> option;

        c_arr = dtm[option - 1].arrival;
        c_airline = dtm[option - 1].airline;
        c_dep = dtm[option - 1].dep;
        price = dtm[option - 1].price;
    }
    else if (src == "Delhi" && des == "Goa" || des == "Delhi" && src == "Goa")
    {
        cout << "Choose from below\n";
        for (int i = 0; i < 4; i++)
        {
            cout << i + 1 << " ";
            dtg[i].get_details();
        }
        int option;
        cin >> option;

        c_arr = dtg[option - 1].arrival;
        c_airline = dtg[option - 1].airline;
        c_dep = dtg[option - 1].dep;
        price = dtg[option - 1].price;
    }
    else if (src == "Delhi" && des == "Bangalore" || des == "Delhi" && src == "Bangalore")
    {
        cout << "Choose from below\n";
        for (int i = 0; i < 5; i++)
        {
            cout << i + 1 << " ";
            dtb[i].get_details();
        }
        int option;
        cin >> option;

        c_arr = dtb[option - 1].arrival;
        c_airline = dtb[option - 1].airline;
        c_dep = dtb[option - 1].dep;
        price = dtb[option - 1].price;
    }
    else if (src == "Delhi" && des == "Patna" || des == "Delhi" && src == "Patna")
    {
        cout << "Choose from below\n";
        for (int i = 0; i < 5; i++)
        {
            cout << i + 1 << " ";
            dtp[i].get_details();
        }
        int option;
        cin >> option;

        c_arr = dtp[option - 1].arrival;
        c_airline = dtp[option - 1].airline;
        c_dep = dtp[option - 1].dep;
        price = dtp[option - 1].price;
    }
    else if (src == "Delhi" && des == "Hyderabad" || des == "Delhi" && src == "Hyderabad")
    {
        cout << "Choose from below\n";
        for (int i = 0; i < 5; i++)
        {
            cout << i + 1 << " ";
            dth[i].get_details();
        }
        int option;
        cin >> option;

        c_arr = dth[option - 1].arrival;
        c_airline = dth[option - 1].airline;
        c_dep = dth[option - 1].dep;
        price = dth[option - 1].price;
    }

    else if (src == "Delhi" && des == "Chennai" || des == "Delhi" && src == "Chennai")
    {
        cout << "Choose from below\n";
        for (int i = 0; i < 5; i++)
        {
            cout << i + 1 << " ";
            dtc[i].get_details();
        }
        int option;
        cin >> option;

        c_arr = dtc[option - 1].arrival;
        c_airline = dtc[option - 1].airline;
        c_dep = dtc[option - 1].dep;
        price = dtc[option - 1].price;
    }
    else if (src == "Delhi" && des == "Kolkata" || des == "Delhi" && src == "Kolkata")
    {
        cout << "Choose from below\n";
        for (int i = 0; i < 4; i++)
        {
            cout << i + 1 << " ";
            dtk[i].get_details();
        }
        int option;
        cin >> option;

        c_arr = dtk[option - 1].arrival;
        c_airline = dtk[option - 1].airline;
        c_dep = dtk[option - 1].dep;
        price = dtk[option - 1].price;
    }
    else if (src == "Mumbai" && des == "Goa" || des == "Mumbai" && src == "Goa")
    {
        cout << "Choose from below\n";
        for (int i = 0; i < 5; i++)
        {
            cout << i + 1 << " ";
            mtg[i].get_details();
        }
        int option;
        cin >> option;

        c_arr = mtg[option - 1].arrival;
        c_airline = mtg[option - 1].airline;
        c_dep = mtg[option - 1].dep;
        price = mtg[option - 1].price;
    }
    else if (src == "Mumbai" && des == "Bangalore" || des == "Mumbai" && src == "Bangalore")
    {
        cout << "Choose from below\n";
        for (int i = 0; i < 5; i++)
        {
            cout << i + 1 << " ";
            mtb[i].get_details();
        }
        int option;
        cin >> option;

        c_arr = mtb[option - 1].arrival;
        c_airline = mtb[option - 1].airline;
        c_dep = mtb[option - 1].dep;
        price = mtb[option - 1].price;
    }

    else if (src == "Mumbai" && des == "Patna" || des == "Mumbai" && src == "Patna")
    {
        cout << "Choose from below\n";
        for (int i = 0; i < 5; i++)
        {
            cout << i + 1 << " ";
            mtp[i].get_details();
        }
        int option;
        cin >> option;

        c_arr = mtp[option - 1].arrival;
        c_airline = mtp[option - 1].airline;
        c_dep = mtp[option - 1].dep;
        price = mtp[option - 1].price;
    }

    else if (src == "Mumbai" && des == "Hyderabad" || des == "Mumbai" && src == "Hyderabad")
    {
        cout << "Choose from below\n";
        for (int i = 0; i < 4; i++)
        {
            cout << i + 1 << " ";
            mth[i].get_details();
        }
        int option;
        cin >> option;

        c_arr = mth[option - 1].arrival;
        c_airline = mth[option - 1].airline;
        c_dep = mth[option - 1].dep;
        price = mth[option - 1].price;
    }

    else if (src == "Mumbai" && des == "Chennai" || des == "Mumbai" && src == "Chennai")
    {
        cout << "Choose from below\n";
        for (int i = 0; i < 5; i++)
        {
            cout << i + 1 << " ";
            mtc[i].get_details();
        }
        int option;
        cin >> option;

        c_arr = mtc[option - 1].arrival;
        c_airline = mtc[option - 1].airline;
        c_dep = mtc[option - 1].dep;
        price = mtc[option - 1].price;
    }

    else if (src == "Mumbai" && des == "Kolkata" || des == "Mumbai" && src == "Kolkata")
    {
        cout << "Choose from below\n";
        for (int i = 0; i < 4; i++)
        {
            cout << i + 1 << " ";
            mtk[i].get_details();
        }
        int option;
        cin >> option;

        c_arr = mtk[option - 1].arrival;
        c_airline = mtk[option - 1].airline;
        c_dep = mtk[option - 1].dep;
        price = mtk[option - 1].price;
    }

    else if (src == "Goa" && des == "Bangalore" || des == "Goa" && src == "Bangalore")
    {
        cout << "Choose from below\n";
        for (int i = 0; i < 4; i++)
        {
            cout << i + 1 << " ";
            gtb[i].get_details();
        }
        int option;
        cin >> option;

        c_arr = gtb[option - 1].arrival;
        c_airline = gtb[option - 1].airline;
        c_dep = gtb[option - 1].dep;
        price = gtb[option - 1].price;
    }

    else if (src == "Goa" && des == "Patna" || des == "Goa" && src == "Patna")
    {
        cout << "Choose from below\n";
        for (int i = 0; i < 2; i++)
        {
            cout << i + 1 << " ";
            gtp[i].get_details();
        }
        int option;
        cin >> option;

        c_arr = gtp[option - 1].arrival;
        c_airline = gtp[option - 1].airline;
        c_dep = gtp[option - 1].dep;
        price = gtp[option - 1].price;
    }

    else if (src == "Goa" && des == "Hyderabad" || des == "Goa" && src == "Hyderabad")
    {
        cout << "Choose from below\n";
        for (int i = 0; i < 5; i++)
        {
            cout << i + 1 << " ";
            gth[i].get_details();
        }
        int option;
        cin >> option;

        c_arr = gth[option - 1].arrival;
        c_airline = gth[option - 1].airline;
        c_dep = gth[option - 1].dep;
        price = gth[option - 1].price;
    }

    else if (src == "Goa" && des == "Chennai" || des == "Goa" && src == "Chennai")
    {
        cout << "Choose from below\n";
        for (int i = 0; i < 4; i++)
        {
            cout << i + 1 << " ";
            gtc[i].get_details();
        }
        int option;
        cin >> option;

        c_arr = gtc[option - 1].arrival;
        c_airline = gtc[option - 1].airline;
        c_dep = gtc[option - 1].dep;
        price = gtc[option - 1].price;
    }

    else if (src == "Goa" && des == "Kolkata" || des == "Goa" && src == "Kolkata")
    {
        cout << "Choose from below\n";
        for (int i = 0; i < 4; i++)
        {
            cout << i + 1 << " ";
            gtk[i].get_details();
        }
        int option;
        cin >> option;

        c_arr = gtk[option - 1].arrival;
        c_airline = gtk[option - 1].airline;
        c_dep = gtk[option - 1].dep;
        price = gtk[option - 1].price;
    }

    else if (src == "Bangalore" && des == "Patna" || des == "Bangalore" && src == "Patna")
    {
        cout << "Choose from below\n";
        for (int i = 0; i < 4; i++)
        {
            cout << i + 1 << " ";
            btp[i].get_details();
        }
        int option;
        cin >> option;

        c_arr = btp[option - 1].arrival;
        c_airline = btp[option - 1].airline;
        c_dep = btp[option - 1].dep;
        price = btp[option - 1].price;
    }

    else if (src == "Bangalore" && des == "Hyderabad" || des == "Bangalore" && src == "Hyderabad")
    {
        cout << "Choose from below\n";
        for (int i = 0; i < 5; i++)
        {
            cout << i + 1 << " ";
            bth[i].get_details();
        }
        int option;
        cin >> option;

        c_arr = bth[option - 1].arrival;
        c_airline = bth[option - 1].airline;
        c_dep = bth[option - 1].dep;
        price = bth[option - 1].price;
    }

    else if (src == "Bangalore" && des == "Chennai" || des == "Bangalore" && src == "Chennai")
    {
        cout << "Choose from below\n";
        for (int i = 0; i < 5; i++)
        {
            cout << i + 1 << " ";
            btc[i].get_details();
        }
        int option;
        cin >> option;

        c_arr = btc[option - 1].arrival;
        c_airline = btc[option - 1].airline;
        c_dep = btc[option - 1].dep;
        price = btc[option - 1].price;
    }

    else if (src == "Bangalore" && des == "Kolkata" || des == "Bangalore" && src == "Kolkata")
    {
        cout << "Choose from below\n";
        for (int i = 0; i < 5; i++)
        {
            cout << i + 1 << " ";
            btk[i].get_details();
        }
        int option;
        cin >> option;

        c_arr = btk[option - 1].arrival;
        c_airline = btk[option - 1].airline;
        c_dep = btk[option - 1].dep;
        price = btk[option - 1].price;
    }

    else if (src == "Patna" && des == "Hyderabad" || des == "Bangalore" && src == "Hyderabad")
    {
        cout << "Choose from below\n";
        for (int i = 0; i < 3; i++)
        {
            cout << i + 1 << " ";
            pth[i].get_details();
        }
        int option;
        cin >> option;

        c_arr = pth[option - 1].arrival;
        c_airline = pth[option - 1].airline;
        c_dep = pth[option - 1].dep;
        price = pth[option - 1].price;
    }

    else if (src == "Patna" && des == "Chennai" || des == "Bangalore" && src == "Chennai")
    {
        cout << "Choose from below\n";
        for (int i = 0; i < 3; i++)
        {
            cout << i + 1 << " ";
            ptc[i].get_details();
        }
        int option;
        cin >> option;

        c_arr = ptc[option - 1].arrival;
        c_airline = ptc[option - 1].airline;
        c_dep = ptc[option - 1].dep;
        price = ptc[option - 1].price;
    }

    else if (src == "Patna" && des == "Kolkata" || des == "Bangalore" && src == "Kolkata")
    {
        cout << "Choose from below\n";
        for (int i = 0; i < 4; i++)
        {
            cout << i + 1 << " ";
            ptk[i].get_details();
        }
        int option;
        cin >> option;

        c_arr = ptk[option - 1].arrival;
        c_airline = ptk[option - 1].airline;
        c_dep = ptk[option - 1].dep;
        price = ptk[option - 1].price;
    }

    else if (src == "Hyderabad" && des == "Chennai" || des == "Hyderabad" && src == "Chennai")
    {
        cout << "Choose from below\n";
        for (int i = 0; i < 1; i++)
        {
            cout << i + 1 << " ";
            htc[i].get_details();
        }
        int option;
        cin >> option;

        c_arr = htc[option - 1].arrival;
        c_airline = htc[option - 1].airline;
        c_dep = htc[option - 1].dep;
        price = htc[option - 1].price;
    }

    else if (src == "Hyderabad" && des == "Kolkata" || des == "Hyderabad" && src == "Kolkata")
    {
        cout << "Choose from below\n";
        for (int i = 0; i < 5; i++)
        {
            cout << i + 1 << " ";
            htk[i].get_details();
        }
        int option;
        cin >> option;

        c_arr = htk[option - 1].arrival;
        c_airline = htk[option - 1].airline;
        c_dep = htk[option - 1].dep;
        price = htk[option - 1].price;
    }

    else if (src == "Chennai" && des == "Kolkata" || des == "Chennai" && src == "Kolkata")
    {
        cout << "Choose from below\n";
        for (int i = 0; i < 5; i++)
        {
            cout << i + 1 << " ";
            ctk[i].get_details();
        }
        int option;
        cin >> option;

        c_arr = ctk[option - 1].arrival;
        c_airline = ctk[option - 1].airline;
        c_dep = ctk[option - 1].dep;
        price = ctk[option - 1].price;
    }
}
class details
{
    long long mno, ano;

public:
    string f_name, m_name, l_name, email, gender;
    void put_details()
    {
        fflush(stdin);
        cout << "Enter your first name\n\n";
        cin >> f_name;
        cout << "Enter your middle name\n\n";
        cin >> m_name;
        cout << "Enter your last name\n\n";
        cin >> l_name;
        cout << "Enter your mobile number\n\n";
        cin >> mno;
        cout << "Enter your email id\n\n";
        cin >> email;
        cout << "Enter your gender\n\n";
        cin >> gender;
        cout << "Enter your aadhar number\n\n";
        cin >> ano;
    }
    long long get_mno() { return mno; }
    long long get_ano() { return ano; }
};

class customer
{
    string type;
    details d;

public:
    float dis_n = 0;
    void put_customer()
    {
        d.put_details();
    }
    string get_fname() { return d.f_name; }
    string get_mname() { return d.m_name; }
    string get_lname() { return d.l_name; }
    string get_gender() { return d.gender; }
    string get_email() { return d.email; }
    long long get_mobno() { return d.get_mno(); }
    long long get_adhno() { return d.get_ano(); }
};

class bronze : public customer
{
public:
    float dis_br = 0.05;
};
class gold : public customer
{
public:
    float dis_g = 0.1;
};
class diamond : public customer
{
public:
    float dis_d = 0.2;
};

class date
{
public:
    int dd, mm, yyyy;
    void put_date()
    {
        cout << "Enter date(dd)\n";
        cin >> dd;
        cout << "Enter month(mm)\n";
        cin >> mm;
        cout << "Enter year(yyyy)\n";
        cin >> yyyy;
    }
};
class payment
{
protected:
    int cvv, cardno;
    string exp_date;
    double pay;

public:
    int get_final_amount() { return pay; }
    virtual void make_payment (int price,int count,double dis)=0;
};
class debit_card : public payment
{
    double dis_debcard = 0.05;

public:
    void make_payment(int price, int count, double dis)
    {
        cout << "Enter card details\n\n";
        cout << "Enter debit card number\n\n";
        cin >> cardno;
        cout << "Enter exp date(mm/yy)\n\n";
        cin >> exp_date;
        cout << "Enter cvv \n\n";
        cin >> cvv;
        //system("cls");
        cout << "\t\t\tProcessing your Payment.......\n\n";
        //getch();
        //getchar();
        system("pause");
        if ((price * count) > 4000)
        {
            pay = (double)((price * count) - ((price * count) * (double)(dis_debcard + dis)));
            cout << "\t\t\tPayment done of " << pay << "\n\n";
        }

        else
        {
            pay = price * count;
            cout << "\t\t\tPayment done of " << pay << "\n\n";
        }
    }
};
class credit_card : public payment
{
    double dis_credcard = 0.1;

public:
    void make_payment(int price, int count, double dis)
    {
        cout << "Enter Credit card number\n\n";
        cin >> cardno;
        cout << "Enter exp date(mm/yy)\n\n";
        cin >> exp_date;
        cout << "Enter cvv \n\n";
        cin >> cvv;
        cout << "\t\t\t\tProcessing your Payment.......\n\n";
        system("pause");
        if (price * count > 3000)
        {
            pay = (double)((price * count) - ((price * count) * (double)(dis + dis_credcard)));
            cout << "Payment done of " << pay << "\n\n";
        }

        else
        {
            pay = price * count;
            cout << "Payment done of " << pay << "\n\n";
        }
    }
};
class upi : public payment
{
    int upi_id;
    long long m_no;
    double upi_dis = 0.3;

public:
    void make_payment(int price, int count, double dis)
    {
        cout << "Enter Upi_id\n\n";
        cin >> upi_id;
        cout << "Enter mobile no\n\n";
        cin >> m_no;
        cout << "\t\t\t\tProcessing your Payment.......\n\n";
        system("pause");
        if (price * count > 2000)
        {
            pay = (double)((price * count) - ((price * count) * (double)(dis + upi_dis)));
            cout << "Payment done of " << pay << "\n\n";
        }

        else
        {
            pay = price * count;
            cout << "Payment done of " << pay << "\n\n";
        }
    }
};

class reservation
{
    string source, dest;

public:
    void make_booking();
    void review_booking();
    void cancel_booking();
};

void reservation::make_booking()
{
    int s, d, n, seat_no, m_type, price, exs = 0, exd = 0;
    double dis = 0;
    string src, des, airline, dep, arrival, inr_airline;
    do
    {
        exs = 0;
        cout << "Choose source for boarding flight\n\n";
        cout << "1.Delhi(DEL)\n\n2.Mumbai(BOM)\n\n3.Bangalore (BLR)\n\n4.Patna(PAT)\n\n5.Kolkata(CCU)\n\n6.Hyderabad(HYD)\n\n7.Chennai(MAA)\n\n8.Goa\n\n";
        cin >> n;
        switch (n)
        {
        case 1:
            src = "Delhi";
            break;
        case 2:
            src = "Mumbai";
            break;
        case 3:
            src = "Bangalore";
            break;
        case 4:
            src = "Patna";
            break;
        case 5:
            src = "Kolkata";
            break;
        case 6:
            src = "Hyderabad";
            break;
        case 7:
            src = "Chennai";
            break;
        case 8:
            src = "Goa";
            break;
        default:
        {
            cout << "Choose valid option\n\n";
            exs = 1;
        }
        break;
        }
    } while (exs != 0);

    do
    {
        exd = 0;
        cout << "Choose destination\n\n";
        cout << "1.Delhi(DEL)\n\n2.Mumbai(BOM)\n\n3.Bangalore (BLR)\n\n4.Patna(PAT)\n\n5.Kolkata(CCU)\n\n6.Hyderabad(HYD)\n\n7.Chennai(MAA)\n\n8.Goa\n\n";
        cin >> d;
        switch (d)
        {
        case 1:
            des = "Delhi";
            break;
        case 2:
            des = "Mumbai";
            break;
        case 3:
            des = "Bangalore";
            break;
        case 4:
            des = "Patna";
            break;
        case 5:
            des = "Kolkata";
            break;
        case 6:
            des = "Hyderabad";
            break;
        case 7:
            des = "Chennai";
            break;
        case 8:
            des = "Goa";
            break;
        default:
        {
            cout << "Choose valid option\n\n";
            exd = 1;
        }
        break;
        }
    } while (exd != 0);

    system("cls");
    date dt;
    dt.put_date();
    flight f;
    f.put_flight(src, des);
    price = f.price;
    //cout<<price<<endl;
    int count_trav;
    cout << "Enter number of travelers booking is to be made\n";
    cin >> count_trav;
    string f_name[count_trav], m_name[count_trav], l_name[count_trav], gender[count_trav], email[count_trav];
    long long mno[count_trav], ano[count_trav];
    cout << "Choose your membership\n\n";
    cout << "1.Diamond\n\n2.Gold\n\n3.Bronze\n\n4.No membership\n\n";
    cin >> m_type;
    if (m_type == 1)
    {
        diamond c[count_trav];
        diamond d;
        for (int i = 0; i < count_trav; i++)
        {
            c[i].put_customer();
            f_name[i] = c[i].get_fname();
            m_name[i] = c[i].get_mname();
            l_name[i] = c[i].get_lname();
            gender[i] = c[i].get_gender();
            email[i] = c[i].get_email();
            mno[i] = c[i].get_mobno();
            ano[i] = c[i].get_adhno();
        }
        dis = d.dis_d;
    }
    else if (m_type == 2)
    {
        gold c[count_trav], g;
        for (int i = 0; i < count_trav; i++)
        {
            c[i].put_customer();
            f_name[i] = c[i].get_fname();
            m_name[i] = c[i].get_mname();
            l_name[i] = c[i].get_lname();
            gender[i] = c[i].get_gender();
            email[i] = c[i].get_email();
            mno[i] = c[i].get_mobno();
            ano[i] = c[i].get_adhno();
        }
        dis = g.dis_g;
    }
    else if (m_type == 3)
    {
        bronze c[count_trav], b;
        for (int i = 0; i < count_trav; i++)
        {
            c[i].put_customer();
            f_name[i] = c[i].get_fname();
            m_name[i] = c[i].get_mname();
            l_name[i] = c[i].get_lname();
            gender[i] = c[i].get_gender();
            email[i] = c[i].get_email();
            mno[i] = c[i].get_mobno();
            ano[i] = c[i].get_adhno();
        }
        dis = b.dis_br;
    }
    else
    {
        customer c[count_trav], cq;
        for (int i = 0; i < count_trav; i++)
        {
            c[i].put_customer();
            f_name[i] = c[i].get_fname();
            m_name[i] = c[i].get_mname();
            l_name[i] = c[i].get_lname();
            gender[i] = c[i].get_gender();
            email[i] = c[i].get_email();
            mno[i] = c[i].get_mobno();
            ano[i] = c[i].get_adhno();
        }
        dis = cq.dis_n;
    }
    //cout<<dis<<"ghh"<<endl;
    //int pr=((price*count_trav)-(dis*(price*count_trav)));
    cout << "\n\n\t\t\tRedirecting to payment portal .........\n\n";
    system("pause");
    cout << "Choose payment method\n\n";
    cout << "1.Debit card\n\n2.Credit Card\n\n3.Upi\n\n";
    int p_option;
    cin >> p_option;
    if (p_option == 1)
    {
        debit_card d;
        d.make_payment(price, count_trav, dis);
        price = d.get_final_amount();
    }
    else if (p_option == 2)
    {
        credit_card c;
        c.make_payment(price, count_trav, dis);
        price = c.get_final_amount();
        //cout<<price<<"\n";
    }
    else
    {
        upi u;
        u.make_payment(price, count_trav, dis);
        price = u.get_final_amount();
    }
    ofstream fp("record.txt", ios::app);
    cout << "\t\t\tBooking made successfully ......!!!\n\n";
    for (int i = 0; i < count_trav; i++)
    {
        fp << f_name[i] << " " << m_name[i] << " " << l_name[i] << " " << gender[i] << " " << mno[i] << " " << f.c_airline << " " << src << " " << des << " " << dt.dd << " " << dt.mm << " " << dt.yyyy << " " << f.c_dep << " " << f.c_arr << " " << ano[i] << " " << price << "\n";
    }
    for (int i = 0; i < count_trav; i++)
    {
        if (count_trav > 1)
            cout << "\t" << i + 1 << ".Passenger details\n\n\n"
                 << "\t\tPassengers name : " << f_name[i] << " " << m_name[i] << " " << l_name[i] << "  Sex : " << gender[i] << "  Mobile no : " << mno[i] << "  Airline : " << f.c_airline << "  Source : " << src << "  Destination : " << des << " Seat no : A" << i + 1 << "  Date of boarding : " << dt.dd << "/" << dt.mm << "/" << dt.yyyy << "  Departure timing : " << f.c_dep << "  Arrival timing : " << f.c_arr << "  Aadhar no : " << ano[i] << "  Total Price : " << price << "\n\n";
        else
            cout << "\t\tPassengers name : " << f_name[i] << " " << m_name[i] << " " << l_name[i] << "  Sex : " << gender[i] << "  Mobile no : " << mno[i] << "  Airline : " << f.c_airline << "  Source : " << src << "  Destination : " << des << "  Seat no : A1 "
                 << "  Date of boarding : " << dt.dd << "/" << dt.mm << "/" << dt.yyyy << "  Departure timing : " << f.c_dep << "  Arrival timing : " << f.c_arr << "  Aadhar no : " << ano[i] << "  Total Price : " << price << "\n\n";
    }
    fp.close();
    cout << endl;
}

void reservation::review_booking()
{
    string f_name, m_name, l_name, gender, c_airline, c_dep, c_arr, src, des;
    int dd, mm, yyyy, price, i = 1, flag = 0;
    long long mno, c_mno, ano;
    cout << "Enter your mobile no to review your bookings\n\n";
    cin >> c_mno;
    ifstream fp("record.txt");
    while (fp >> f_name >> m_name >> l_name >> gender >> mno >> c_airline >> src >> des >> dd >> mm >> yyyy >> c_dep >> c_arr >> ano >> price)
    {
        if (mno == c_mno)
        {
            cout << "\t\tPassengers name : " << f_name << " " << m_name << " " << l_name << "  Sex : " << gender << "  Mobile no : " << mno << "  Airline : " << c_airline << "  Source : " << source << "  Destination : " << des << "  Seat no : A " << i << "  Date of boarding : " << dd << "/" << mm << "/" << yyyy << "  Departure timing : " << c_dep << "  Arrival timing : " << c_arr << "  Aadhar no : " << ano << "  Total Price : " << price << " \n\n";
            flag = 1;
        }
    }
    if (flag == 0)
        cout << "NO BOOKING FOUND \n\n";
    fp.close();
}

void reservation::cancel_booking()
{
    string f_name, m_name, l_name, gender, src, des, c_src[10], c_des[10], c_airline, c_dep, c_arr, c_f_name[10], c_m_name[10], c_l_name[10], c_gender[10], c_c_dep[10], c_c_airline[10], c_c_arr[10];
    int dd, mm, yyyy, price, flag = 0, c_dd[10], c_mm[10], c_yyyy[10], c_price[10], i = 0;
    long long mno, c_mno[5], cancel_mno, ano, c_ano[5];
    cout << "Enter mobile no to cancel booking\n\n";
    cin >> cancel_mno;
    ifstream fp("record.txt");
    while (fp >> f_name >> m_name >> l_name >> gender >> mno >> c_airline >> src >> des >> dd >> mm >> yyyy >> c_dep >> c_arr >> ano >> price)
    {
        if (cancel_mno != mno)
        {
            c_f_name[i] = f_name;
            c_m_name[i] = m_name;
            c_l_name[i] = l_name;
            c_gender[i] = gender;
            c_mno[i] = mno;
            c_c_airline[i] = c_airline;
            c_src[i] = src;
            c_des[i] = des;
            c_dd[i] = dd;
            c_mm[i] = mm;
            c_yyyy[i] = yyyy;
            c_c_dep[i] = c_dep;
            c_c_arr[i] = c_arr;
            c_ano[i] = ano;
            c_price[i] = price;
            i++;
        }
        if (cancel_mno == mno)
            flag = 1;
    }
    fp.close();
    ofstream fp1("record.txt");
    for (int j = 0; j < i; j++)
    {
        fp1 << c_f_name[j] << " " << c_m_name[j] << " " << c_l_name[j] << " " << c_gender[j] << " " << c_mno[j] << " " << c_c_airline[j] << " "<<c_src[j]<<" "<<c_des[j]<< " " << c_dd[j] << " " << c_mm[j] << " " << c_yyyy[j] << " " << c_c_dep[j] << " " << c_c_arr[j] << " " << c_ano[j] << " " << c_price[j] << "\n";
    }
    fp1.close();
    if (flag == 0)
        cout << "No booking found with the given number\n\n";
    else
        cout << "\t\tBooking canceled \n\n\t\tYour refund has been initiated .....!\n\n";
}

class employee
{
public:
    int salary, emp_id, bonus;
    string emp_f_name, emp_m_name, emp_l_name, emp_gender;
    long long emp_mob;
    void put_emp_details()
    {
        cout << "Enter employee first name\n\n";
        cin >> emp_f_name;
        cout << "Enter employee middle name\n\n";
        cin >> emp_m_name;
        cout << "Enter employee last name\n\n";
        cin >> emp_l_name;
        cout << "Enter employee gender\n\n";
        cin >> emp_gender;
        cout << "Enter employee id\n\n";
        cin >> emp_id;
        cout << "Enter employee mobile number\n\n";
        cin >> emp_mob;
        cout << "Enter employee base salary\n\n";
        cin >> salary;
        //cout<<"Enter fly_hour\n\n";
        //cin>>fly_hours;
    }
};
class pilot : public employee
{
public:
    int tier;
    void put_pilot_details()
    {
        cout << "Enter tier of Pilot\n";
        cin >> tier;
        cout << "Enter bonus for Pilots\n\n";
        cin >> bonus;
    }
};
class copilot : public employee
{
public:
    int rank;
    void put_copilot_details()
    {
        cout << "Enter rank of CoPilot\n";
        cin >> rank;
        cout << "Enter bonus for CoPilot\n\n";
        cin >> bonus;
    }
};
class crew : public employee
{
public:
    int rank;
    void put_crew_details()
    {
        cout << "Enter rank of Crew\n";
        cin >> rank;
        cout << "Enter bonus for Crew\n\n";
        cin >> bonus;
    }
};
class aircraft_carrier
{
public:
    int a_no, a_floor, a_cno, a_pno;
    string a_comp, a_type;
    void put_aircraft_details()
    {
        cout << "Enter aircraft type\n\n";
        cin >> a_type;
        cout << "Enter aircraft no\n\n";
        cin >> a_no;
        cout << "Enter aircraft company\n\n";
        cin >> a_comp;
        cout << "Enter no of decks in aircraft\n\n";
        cin >> a_floor;
        cout << "Enter no of crew(Pilot/Co Pilot/Crew) needed for operation\n\n";
        cin >> a_cno;
        cout << "Enter total number of passengers accommodation\n\n";
        cin >> a_pno;
    }
};
class manage
{
public:
    void add_employee();
    void display_employee();
    void remove_employee();
    void get_salary();
    void add_aircraft();
    void get_aircraft();
    void remove_aircraft();
};
void manage::add_aircraft()
{
    aircraft_carrier a;
    a.put_aircraft_details();
    ofstream fp("manage_aircraft.txt", ios::app);
    fp << a.a_type << " " << a.a_no << " " << a.a_comp << " " << a.a_cno << " " << a.a_pno << " " << a.a_floor << "\n";
    cout << "Aircraft added successfully\n\n";
}
void manage::get_aircraft()
{
    int a_no, a_floor, a_cno, a_pno, flag = 0;
    string a_comp, a_type;
    ifstream fp("manage_aircraft.txt");
    cout<<"Available aircraft is/are :\n\n";
    while (fp >> a_type >> a_no >> a_comp >> a_cno >> a_pno >> a_floor)
    {
        cout << " Aircraft type :" << a_type << " Aircraft no : " << a_no << " Aircraft company : " << a_comp << " No of decks available in aircraft : " << a_floor << " No of crew(Pilot/Co Pilot/Crew) available for operation : " << a_cno << " Total number of passengers in aircraft : " << a_pno << "\n\n";
        flag = 1;
    }
    if (flag == 0)
        cout << "No aircraft carrier left\n\n";
}
void manage::remove_aircraft()
{
    int a_no, a_floor, a_cno, a_pno, c_a_no[10], c_a_floor[10], c_a_cno[10], c_a_pno[10], c_ano, i = 0, flag = 0;
    string a_comp, a_type, c_a_comp[10], c_a_type[10];
    ifstream fp("manage_aircraft.txt");
    cout << "Enter aircraft no to remove\n\n";
    cin >> c_ano;
    while (fp >> a_type >> a_no >> a_comp >> a_cno >> a_pno >> a_floor)
    {
        if (c_ano != a_no)
        {
            c_a_type[i] = a_type[i];
            c_a_no[i] = a_no;
            c_a_comp[i] = a_comp;
            c_a_cno[i] = a_cno;
            c_a_pno[i] = a_pno;
            c_a_floor[i] = a_floor;
            i++;
        }
        if (c_ano == a_no)
            flag = 1;
    }
    fp.close();
    ofstream fp1("manage_aircraft.txt");
    for (int j = 0; j < i; j++)
    {
        fp1 << c_a_type[j] << " " << c_a_no[j] << " " << c_a_comp[j] << " " << c_a_cno[j] << " " << c_a_pno[j] << " " << c_a_floor[j] << "\n";
    }
    fp1.close();
    if (flag == 0)
        cout << "No aircraft found with given no\n\n";
    else
        cout << "Aircraft removed ...!!!\n\n";
}
void manage::add_employee()
{
    string emp_type;
    cout << "Enter employee type (Pilot/Copilot/Crew)\n\n";
    cin >> emp_type;
    if (emp_type == "Pilot")
    {
        pilot p;
        p.put_emp_details();
        p.put_pilot_details();
        ofstream fp("manage_details.txt", ios::app);
        fp << p.emp_f_name << " " << p.emp_m_name << " " << p.emp_l_name << " " << p.emp_mob << " " << p.emp_id << " " << emp_type << " " << p.salary << " " << p.emp_gender << " " << p.bonus << " " << p.tier << "\n";
        cout << "Added successfully\n\n";
    }
    else if (emp_type == "Copilot")
    {
        copilot cp;
        cp.put_emp_details();
        cp.put_copilot_details();
        ofstream fp("manage_details.txt", ios::app);
        fp << cp.emp_f_name << " " << cp.emp_m_name << " " << cp.emp_l_name << " " << cp.emp_mob << " " << cp.emp_id << " " << emp_type << " " << cp.salary << " " << cp.emp_gender << " " << cp.bonus << " " << cp.rank << "\n";
        cout << "Added successfully\n\n";
    }
    else if (emp_type == "Crew")
    {
        crew c;
        c.put_emp_details();
        c.put_crew_details();
        ofstream fp("manage_details.txt", ios::app);
        fp << c.emp_f_name << " " << c.emp_m_name << " " << c.emp_l_name << " " << c.emp_mob << " " << c.emp_id << " " << emp_type << " " << c.salary << " " << c.emp_gender << " " << c.bonus << " " << c.rank << "\n";
        cout << "Added successfully\n\n";
    }
}

void manage::display_employee()
{
    string fname, lname, mname, gender, type;
    int id, salary, bonus, rank, flag = 0;
    long long mob;
    ifstream fp("manage_details.txt");
    cout<<"Current working employee are : \n\n";
    while (fp >> fname >> mname >> lname >> mob >> id >> type >> salary >> gender >> bonus >> rank)
    {
        cout << "\tName : " << fname << " " << mname << " " << lname << "  Mobile no: " << mob << "  ID : " << id << "  Employee is a : " << type << "  Base Salary : " << salary << "  Gender : " << gender << "  Bonus:" << bonus << "  Rank/Post/Tier : " << rank << " \n\n";
        flag = 1;
    }
    if (flag == 0)
        cout << "No working employee in airline...!!\n\n";
}
void manage::remove_employee()
{
    int emp_salary[10], emp_id[10], emp_bonus[10], emp_rank[10], i = 0, id, salary, bonus, rank, c_emp_id, flag = 0;
    string emp_f_name[10], emp_m_name[10], emp_l_name[10], emp_type[10], emp_gender[10], fname, lname, mname, type, gender;
    long long emp_mob[10], mob;
    cout << "Enter employee id\n\n";
    cin >> c_emp_id;
    ifstream fp("manage_details.txt");
    while (fp >> fname >> mname >> lname >> mob >> id >> type >> salary >> gender >> bonus >> rank)
    {
        if (c_emp_id != id)
        {
            emp_f_name[i] = fname;
            emp_m_name[i] = mname;
            emp_l_name[i] = lname;
            emp_mob[i] = mob;
            emp_id[i] = id;
            emp_type[i] = type;
            emp_salary[i] = salary;
            emp_gender[i] = gender;
            emp_bonus[i] = bonus;
            emp_rank[i] = rank;
            i++;
        }
        if (c_emp_id == id)
            flag = 1;
    }
    fp.close();
    ofstream fp1("manage_details.txt");
    for (int j = 0; j < i; j++)
    {
        fp1 << emp_f_name[j] << " " << emp_m_name[j] << " " << emp_l_name[j] << " " << emp_mob[j] << " " << emp_id[j] << " " << emp_type[j] << " " << emp_salary[j] << " " << emp_gender[j] << " " << emp_bonus[j] << " " << emp_rank[j] << "\n";
    }
    fp1.close();
    if (flag == 0)
        cout << "No employee found with given id\n\n";
    else
        cout << "Employee removed ... !!!\n\n";
}
void manage::get_salary()
{
    int flag = 0, id, salary, bonus, rank, emp_id;
    long long mob;
    string fname, lname, mname, type, gender;
    ifstream fp("manage_details.txt");
    cout << "Enter employee id to get salary\n\n";
    cin >> emp_id;
    while (fp >> fname >> mname >> lname >> mob >> id >> type >> salary >> gender >> bonus >> rank)
    {
        if (emp_id == id)
        {
            cout << "Your total salary after adding bonus : rs." << bonus + salary << "\n\n";
            flag = 1;
        }
    }
    if (flag == 0)
        cout << "Employee not found ....!!!\n\n";
}
class credentials
{
    string user, c_user;
    int pass, c_pass;

public:
    int flag = 0;
    int check_credentials()
    {
        cout << "Enter user name\n\n";
        cin >> user;
        cout << "Enter password\n\n";
        cin >> pass;
        ifstream fp("manage_record.txt");
        while (fp >> c_user >> c_pass)
        {
                if (user == c_user && c_pass == pass)
                {
                    cout << "Login successful\n\n";
                    flag = 1;

                }
        }
        try
        {
            if(flag==1)
                throw(flag);
            else
                throw(flag);
        }
        catch(int f)
        {
            return f;
        }
    }
};
int main()
{
    cout << "\t\t***************** Welcome to F&F Airline Reservation and Management *******************\n\n";
    cout << "Choose option below \n\n 1.Reservation \n\n 2.Management\n\n 3.Exit\n\n";
    int option;
    cin >> option;
    //system("cls");
    try
    {
        if (option == 1)
        {
            cout << "\t\t*****************Welcome to F&F Airline Reservation Portal*******************\n\n";
            reservation r;
            while (1)
            {
                int n;
                cout << "Choose option below\n\n";
                cout << "1.Make booking\n\n2.Review booking\n\n3.Cancel booking\n\n4.Exit\n\n";
                cin >> n;
                system("cls");
                switch (n)
                {
                case 1:
                    r.make_booking();
                    break;
                case 2:
                    r.review_booking();
                    break;
                case 3:
                    r.cancel_booking();
                    break;
                case 4:
                    exit(0);
                    break;
                default:
                    cout << "Choose valid option\n\n\n";
                    break;
                }
            }
        }
        else if (option == 2)
        {
            int check;
            cout << "\t\t*****************Welcome to F&F Airline management portal *******************\n\n";
            credentials c;
            check = c.check_credentials();
            system("cls");
            if (check == 1)
            {
                while (1)
                {
                    manage m;
                    cout << "\n1.Add employee\n\n2.Remove employee\n\n3.Display employee\n\n4.Get Salary\n\n5.Get available aircraft \n\n6.Add aircraft\n\n7.Remove aircraft.\n\n8.Exit\n\n";
                    int choice;
                    cin >> choice;
                    if (choice == 1)
                        m.add_employee();
                    else if (choice == 2)
                        m.remove_employee();
                    else if (choice == 3)
                        m.display_employee();
                    else if (choice == 4)
                        m.get_salary();
                    else if (choice == 5)
                        m.get_aircraft();
                    else if (choice == 6)
                        m.add_aircraft();
                    else if (choice == 7)
                        m.remove_aircraft();
                    else if (choice == 8)
                    {
                        cout<<"\nThanks for visiting us ....!!!!\n\n";
                        exit(0);
                    }
                    else
                        cout << "Choose valid option\n\n";
                }
            }
            else
            {
                cout << "Try again with correct user name and password\n\n";
                exit(0);
            }
        }
        else if (option == 3)
        {
            cout << "Thanks for visiting us ....!!!!\n\n";
            exit(0);
        }
        else
        {
            throw "Choose valid option";
        }
    }

    catch (char const *s)
    {
        cout <<s<< "\n\n";
    }
    return 0;
}
