#pragma once

#include <string>

// เข้ารหัส/ถอดรหัสโดยใช้ ROT
class ROT {
public:
    
    /**
     *  เข้ารหัส String โดยใช้ ROT
     *  @param input_string String นำเข้า
     *  @param rot          ROT ที่ต้องการ
     * 
     *  @return String ที่เข้ารหัสโดย ROT เรียบร้อยแล้ว
     */
    static std::string encode(std::string input_string, int rot) {

        std::string output_string;
        for(int i = 0; i < input_string.size(); i++) {

            char character = input_string.at(i);
            if(character >= 'A' && character <= 'Z') output_string.push_back(((int)character + rot) % (int)'Z');
            else if(character >= 'a' && character <= 'z') output_string.push_back(((int)character + rot) % (int)'z');
            else output_string.push_back(character);
        }
        return output_string;
    }

    /**
     *  ถอดรหัส String โดยใช้ ROT
     *  @param input_string String นำเข้า
     *  @param rot          ROT ที่ต้องการ
     * 
     *  @return String ที่ถอดรหัสโดย ROT เรียบร้อยแล้ว
     */
    static std::string decode(std::string input_string, int rot) {

        std::string output_string;
        for(int i = 0; i < input_string.size(); i++) {

            char character = input_string.at(i);
            if(character >= 'A' && character <= 'Z') output_string.push_back(((int)character - rot + (int)'Z') % (int)'Z');
            else if(character >= 'a' && character <= 'z') output_string.push_back(((int)character - rot + (int)'z') % (int)'z');
            else output_string.push_back(character);
        }
        return output_string;
    }
};