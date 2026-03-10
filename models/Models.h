#pragma once
#include <string>

// 用户信息
struct User
{
    std::string name;     // 姓名
    std::string idNumber; // 身份证号
    std::string mobile;   // 手机号码
};

// 列车信息
struct Train
{
    std::string trainNumber;      // 车次号
    std::string departureStation; // 出发站
    std::string departureTime;    // 出发时间 "YYYY-MM-DD HH:MM"
    std::string arrivalStation;   // 到达站
    std::string arrivalTime;      // 到达时间 "YYYY-MM-DD HH:MM"
    int totalTickets;             // 总车票数量
    int remainingTickets;         // 剩余车票数量
    double price;                 // 票价
};

// 车票信息
struct Ticket
{
    std::string ticketId;         // 车票编号
    std::string userName;         // 用户姓名
    std::string userIdNumber;     // 用户身份证号
    std::string trainNumber;      // 车次号
    std::string departureTime;    // 出发时间
    std::string departureStation; // 出发站
    std::string arrivalStation;   // 到达站
    double fare;                  // 票价
    std::string bookingTime;      // 购票时间
};
