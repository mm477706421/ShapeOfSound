/*
模块名称：加密模块
实现功能：对关键信息进行加密
完成作者：史家旭
测试人员：郭明皓 史家旭
审核人员：郭明皓 刘元庆
*/

#pragma once
#ifndef MYMD5_H
#define MYMD5_H

#include <iostream>


class mymd5
{
public:
    mymd5();
#define shift(x, n) (((x) << (n)) | ((x) >> (32-(n))))
#define F(x, y, z) (((x) & (y)) | ((~x) & (z)))
#define G(x, y, z) (((x) & (z)) | ((y) & (~z)))
#define H(x, y, z) ((x) ^ (y) ^ (z))
#define I(x, y, z) ((y) ^ ((x) | (~z)))
#define A 0x67452301
#define B 0xefcdab89
#define C 0x98badcfe
#define D 0x10325476

void mainLoop(unsigned int M[]);

unsigned int* add(std::string str);


};
std::string changeHex(int a);
std::string getMD5(std::string source);

#endif // MYMD5_H
