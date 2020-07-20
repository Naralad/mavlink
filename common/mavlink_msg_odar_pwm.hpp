// MESSAGE ODAR_PWM support class

#pragma once

namespace mavlink {
namespace common {
namespace msg {

/**
 * @brief ODAR_PWM message
 *
 *  ODAR PWM 
 */
struct ODAR_PWM : mavlink::Message {
    static constexpr msgid_t MSG_ID = 227;
    static constexpr size_t LENGTH = 24;
    static constexpr size_t MIN_LENGTH = 24;
    static constexpr uint8_t CRC_EXTRA = 229;
    static constexpr auto NAME = "ODAR_PWM";


    uint64_t time_usec; /*< Timestamp (micros since boot or Unix epoch) */
    uint16_t pwm1; /*<   */
    uint16_t pwm2; /*<   */
    uint16_t pwm3; /*<   */
    uint16_t pwm4; /*<   */
    uint16_t pwm5; /*<   */
    uint16_t pwm6; /*<   */
    uint16_t pwm7; /*<   */
    uint16_t pwm8; /*<   */


    inline std::string get_name(void) const override
    {
            return NAME;
    }

    inline Info get_message_info(void) const override
    {
            return { MSG_ID, LENGTH, MIN_LENGTH, CRC_EXTRA };
    }

    inline std::string to_yaml(void) const override
    {
        std::stringstream ss;

        ss << NAME << ":" << std::endl;
        ss << "  time_usec: " << time_usec << std::endl;
        ss << "  pwm1: " << pwm1 << std::endl;
        ss << "  pwm2: " << pwm2 << std::endl;
        ss << "  pwm3: " << pwm3 << std::endl;
        ss << "  pwm4: " << pwm4 << std::endl;
        ss << "  pwm5: " << pwm5 << std::endl;
        ss << "  pwm6: " << pwm6 << std::endl;
        ss << "  pwm7: " << pwm7 << std::endl;
        ss << "  pwm8: " << pwm8 << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << time_usec;                     // offset: 0
        map << pwm1;                          // offset: 8
        map << pwm2;                          // offset: 10
        map << pwm3;                          // offset: 12
        map << pwm4;                          // offset: 14
        map << pwm5;                          // offset: 16
        map << pwm6;                          // offset: 18
        map << pwm7;                          // offset: 20
        map << pwm8;                          // offset: 22
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> time_usec;                     // offset: 0
        map >> pwm1;                          // offset: 8
        map >> pwm2;                          // offset: 10
        map >> pwm3;                          // offset: 12
        map >> pwm4;                          // offset: 14
        map >> pwm5;                          // offset: 16
        map >> pwm6;                          // offset: 18
        map >> pwm7;                          // offset: 20
        map >> pwm8;                          // offset: 22
    }
};

} // namespace msg
} // namespace common
} // namespace mavlink
