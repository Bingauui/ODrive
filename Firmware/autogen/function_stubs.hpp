/*
 * ============================ WARNING ============================
 * ==== This is an autogenerated file.                          ====
 * ==== Any changes to this file will be lost when recompiling. ====
 * =================================================================
 *
 * This file contains serializing/deserializing stubs for the functions defined
 * in your interface file.
 *
 */

#include <fibre/bufptr.hpp>



static inline bool odrive_test_function(std::optional<ODriveIntf*> in_obj, std::optional<int32_t> in_delta, int32_t* out_cnt, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<ODriveIntf*>::decode(input_buffer)).has_value())
                && (in_delta.has_value() || (in_delta = fibre::Codec<int32_t>::decode(input_buffer)).has_value());
    if (!success) {
        return false;
    }
    std::tuple<int32_t> ret = (*in_obj)->test_function(*in_delta);
    return ((out_cnt && ((*out_cnt = std::get<0>(ret)), true)) || fibre::Codec<int32_t>::encode(std::get<0>(ret), output_buffer));
}

static inline bool odrive_get_adc_voltage(std::optional<ODriveIntf*> in_obj, std::optional<uint32_t> in_gpio, float* out_voltage, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<ODriveIntf*>::decode(input_buffer)).has_value())
                && (in_gpio.has_value() || (in_gpio = fibre::Codec<uint32_t>::decode(input_buffer)).has_value());
    if (!success) {
        return false;
    }
    std::tuple<float> ret = (*in_obj)->get_adc_voltage(*in_gpio);
    return ((out_voltage && ((*out_voltage = std::get<0>(ret)), true)) || fibre::Codec<float>::encode(std::get<0>(ret), output_buffer));
}

static inline bool odrive_save_configuration(std::optional<ODriveIntf*> in_obj, bool* out_success, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<ODriveIntf*>::decode(input_buffer)).has_value());
    if (!success) {
        return false;
    }
    std::tuple<bool> ret = (*in_obj)->save_configuration();
    return ((out_success && ((*out_success = std::get<0>(ret)), true)) || fibre::Codec<bool>::encode(std::get<0>(ret), output_buffer));
}

static inline bool odrive_erase_configuration(std::optional<ODriveIntf*> in_obj, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<ODriveIntf*>::decode(input_buffer)).has_value());
    if (!success) {
        return false;
    }
    (*in_obj)->erase_configuration();
    return true;
}

static inline bool odrive_reboot(std::optional<ODriveIntf*> in_obj, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<ODriveIntf*>::decode(input_buffer)).has_value());
    if (!success) {
        return false;
    }
    (*in_obj)->reboot();
    return true;
}

static inline bool odrive_enter_dfu_mode(std::optional<ODriveIntf*> in_obj, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<ODriveIntf*>::decode(input_buffer)).has_value());
    if (!success) {
        return false;
    }
    (*in_obj)->enter_dfu_mode();
    return true;
}

static inline bool odrive_get_interrupt_status(std::optional<ODriveIntf*> in_obj, std::optional<int32_t> in_irqn, uint32_t* out_status, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<ODriveIntf*>::decode(input_buffer)).has_value())
                && (in_irqn.has_value() || (in_irqn = fibre::Codec<int32_t>::decode(input_buffer)).has_value());
    if (!success) {
        return false;
    }
    std::tuple<uint32_t> ret = (*in_obj)->get_interrupt_status(*in_irqn);
    return ((out_status && ((*out_status = std::get<0>(ret)), true)) || fibre::Codec<uint32_t>::encode(std::get<0>(ret), output_buffer));
}

static inline bool odrive_get_dma_status(std::optional<ODriveIntf*> in_obj, std::optional<uint8_t> in_stream_num, uint32_t* out_status, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<ODriveIntf*>::decode(input_buffer)).has_value())
                && (in_stream_num.has_value() || (in_stream_num = fibre::Codec<uint8_t>::decode(input_buffer)).has_value());
    if (!success) {
        return false;
    }
    std::tuple<uint32_t> ret = (*in_obj)->get_dma_status(*in_stream_num);
    return ((out_status && ((*out_status = std::get<0>(ret)), true)) || fibre::Codec<uint32_t>::encode(std::get<0>(ret), output_buffer));
}

static inline bool odrive_get_gpio_states(std::optional<ODriveIntf*> in_obj, uint32_t* out_status, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<ODriveIntf*>::decode(input_buffer)).has_value());
    if (!success) {
        return false;
    }
    std::tuple<uint32_t> ret = (*in_obj)->get_gpio_states();
    return ((out_status && ((*out_status = std::get<0>(ret)), true)) || fibre::Codec<uint32_t>::encode(std::get<0>(ret), output_buffer));
}

static inline bool odrive_get_drv_fault(std::optional<ODriveIntf*> in_obj, uint64_t* out_drv_fault, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<ODriveIntf*>::decode(input_buffer)).has_value());
    if (!success) {
        return false;
    }
    std::tuple<uint64_t> ret = (*in_obj)->get_drv_fault();
    return ((out_drv_fault && ((*out_drv_fault = std::get<0>(ret)), true)) || fibre::Codec<uint64_t>::encode(std::get<0>(ret), output_buffer));
}

static inline bool odrive_clear_errors(std::optional<ODriveIntf*> in_obj, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<ODriveIntf*>::decode(input_buffer)).has_value());
    if (!success) {
        return false;
    }
    (*in_obj)->clear_errors();
    return true;
}









static inline bool odrive_axis_watchdog_feed(std::optional<ODriveIntf::AxisIntf*> in_obj, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<ODriveIntf::AxisIntf*>::decode(input_buffer)).has_value());
    if (!success) {
        return false;
    }
    (*in_obj)->watchdog_feed();
    return true;
}















static inline bool odrive_oscilloscope_get_val(std::optional<ODriveIntf::OscilloscopeIntf*> in_obj, std::optional<uint32_t> in_index, float* out_val, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<ODriveIntf::OscilloscopeIntf*>::decode(input_buffer)).has_value())
                && (in_index.has_value() || (in_index = fibre::Codec<uint32_t>::decode(input_buffer)).has_value());
    if (!success) {
        return false;
    }
    std::tuple<float> ret = (*in_obj)->get_val(*in_index);
    return ((out_val && ((*out_val = std::get<0>(ret)), true)) || fibre::Codec<float>::encode(std::get<0>(ret), output_buffer));
}





static inline bool odrive_controller_move_incremental(std::optional<ODriveIntf::ControllerIntf*> in_obj, std::optional<float> in_displacement, std::optional<bool> in_from_input_pos, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<ODriveIntf::ControllerIntf*>::decode(input_buffer)).has_value())
                && (in_displacement.has_value() || (in_displacement = fibre::Codec<float>::decode(input_buffer)).has_value())
                && (in_from_input_pos.has_value() || (in_from_input_pos = fibre::Codec<bool>::decode(input_buffer)).has_value());
    if (!success) {
        return false;
    }
    (*in_obj)->move_incremental(*in_displacement, *in_from_input_pos);
    return true;
}

static inline bool odrive_controller_start_anticogging_calibration(std::optional<ODriveIntf::ControllerIntf*> in_obj, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<ODriveIntf::ControllerIntf*>::decode(input_buffer)).has_value());
    if (!success) {
        return false;
    }
    (*in_obj)->start_anticogging_calibration();
    return true;
}



static inline bool odrive_encoder_set_linear_count(std::optional<ODriveIntf::EncoderIntf*> in_obj, std::optional<int32_t> in_count, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<ODriveIntf::EncoderIntf*>::decode(input_buffer)).has_value())
                && (in_count.has_value() || (in_count = fibre::Codec<int32_t>::decode(input_buffer)).has_value());
    if (!success) {
        return false;
    }
    (*in_obj)->set_linear_count(*in_count);
    return true;
}









static inline bool odrive_mechanical_brake_engage(std::optional<ODriveIntf::MechanicalBrakeIntf*> in_obj, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<ODriveIntf::MechanicalBrakeIntf*>::decode(input_buffer)).has_value());
    if (!success) {
        return false;
    }
    (*in_obj)->engage();
    return true;
}

static inline bool odrive_mechanical_brake_release(std::optional<ODriveIntf::MechanicalBrakeIntf*> in_obj, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<ODriveIntf::MechanicalBrakeIntf*>::decode(input_buffer)).has_value());
    if (!success) {
        return false;
    }
    (*in_obj)->release();
    return true;
}



















































static inline bool fibre_property_odrive_error_readwrite_exchange(std::optional<Property<ODriveIntf::Error>> in_obj, std::optional<ODriveIntf::Error> in_value, ODriveIntf::Error* out_value, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<Property<ODriveIntf::Error>>::decode(input_buffer)).has_value())
                && (in_value.has_value() || (in_value = fibre::Codec<ODriveIntf::Error>::decode(input_buffer)).has_value() || true);
    if (!success) {
        return false;
    }
    std::tuple<ODriveIntf::Error> ret = (*in_obj)->exchange(in_value);
    return ((out_value && ((*out_value = std::get<0>(ret)), true)) || fibre::Codec<ODriveIntf::Error>::encode(std::get<0>(ret), output_buffer));
}



static inline bool fibre_property_float32_readonly_read(std::optional<Property<const float>> in_obj, float* out_value, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<Property<const float>>::decode(input_buffer)).has_value());
    if (!success) {
        return false;
    }
    std::tuple<float> ret = (*in_obj)->read();
    return ((out_value && ((*out_value = std::get<0>(ret)), true)) || fibre::Codec<float>::encode(std::get<0>(ret), output_buffer));
}



static inline bool fibre_property_float32_readwrite_exchange(std::optional<Property<float>> in_obj, std::optional<float> in_value, float* out_value, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<Property<float>>::decode(input_buffer)).has_value())
                && (in_value.has_value() || (in_value = fibre::Codec<float>::decode(input_buffer)).has_value() || true);
    if (!success) {
        return false;
    }
    std::tuple<float> ret = (*in_obj)->exchange(in_value);
    return ((out_value && ((*out_value = std::get<0>(ret)), true)) || fibre::Codec<float>::encode(std::get<0>(ret), output_buffer));
}



static inline bool fibre_property_uint64_readonly_read(std::optional<Property<const uint64_t>> in_obj, uint64_t* out_value, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<Property<const uint64_t>>::decode(input_buffer)).has_value());
    if (!success) {
        return false;
    }
    std::tuple<uint64_t> ret = (*in_obj)->read();
    return ((out_value && ((*out_value = std::get<0>(ret)), true)) || fibre::Codec<uint64_t>::encode(std::get<0>(ret), output_buffer));
}



static inline bool fibre_property_uint8_readonly_read(std::optional<Property<const uint8_t>> in_obj, uint8_t* out_value, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<Property<const uint8_t>>::decode(input_buffer)).has_value());
    if (!success) {
        return false;
    }
    std::tuple<uint8_t> ret = (*in_obj)->read();
    return ((out_value && ((*out_value = std::get<0>(ret)), true)) || fibre::Codec<uint8_t>::encode(std::get<0>(ret), output_buffer));
}



static inline bool fibre_property_bool_readonly_read(std::optional<Property<const bool>> in_obj, bool* out_value, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<Property<const bool>>::decode(input_buffer)).has_value());
    if (!success) {
        return false;
    }
    std::tuple<bool> ret = (*in_obj)->read();
    return ((out_value && ((*out_value = std::get<0>(ret)), true)) || fibre::Codec<bool>::encode(std::get<0>(ret), output_buffer));
}



static inline bool fibre_property_uint32_readonly_read(std::optional<Property<const uint32_t>> in_obj, uint32_t* out_value, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<Property<const uint32_t>>::decode(input_buffer)).has_value());
    if (!success) {
        return false;
    }
    std::tuple<uint32_t> ret = (*in_obj)->read();
    return ((out_value && ((*out_value = std::get<0>(ret)), true)) || fibre::Codec<uint32_t>::encode(std::get<0>(ret), output_buffer));
}



static inline bool fibre_property_bool_readwrite_exchange(std::optional<Property<bool>> in_obj, std::optional<bool> in_value, bool* out_value, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<Property<bool>>::decode(input_buffer)).has_value())
                && (in_value.has_value() || (in_value = fibre::Codec<bool>::decode(input_buffer)).has_value() || true);
    if (!success) {
        return false;
    }
    std::tuple<bool> ret = (*in_obj)->exchange(in_value);
    return ((out_value && ((*out_value = std::get<0>(ret)), true)) || fibre::Codec<bool>::encode(std::get<0>(ret), output_buffer));
}



static inline bool fibre_property_uint32_readwrite_exchange(std::optional<Property<uint32_t>> in_obj, std::optional<uint32_t> in_value, uint32_t* out_value, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<Property<uint32_t>>::decode(input_buffer)).has_value())
                && (in_value.has_value() || (in_value = fibre::Codec<uint32_t>::decode(input_buffer)).has_value() || true);
    if (!success) {
        return false;
    }
    std::tuple<uint32_t> ret = (*in_obj)->exchange(in_value);
    return ((out_value && ((*out_value = std::get<0>(ret)), true)) || fibre::Codec<uint32_t>::encode(std::get<0>(ret), output_buffer));
}



static inline bool fibre_property_odrive_stream_protocol_type_readwrite_exchange(std::optional<Property<ODriveIntf::StreamProtocolType>> in_obj, std::optional<ODriveIntf::StreamProtocolType> in_value, ODriveIntf::StreamProtocolType* out_value, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<Property<ODriveIntf::StreamProtocolType>>::decode(input_buffer)).has_value())
                && (in_value.has_value() || (in_value = fibre::Codec<ODriveIntf::StreamProtocolType>::decode(input_buffer)).has_value() || true);
    if (!success) {
        return false;
    }
    std::tuple<ODriveIntf::StreamProtocolType> ret = (*in_obj)->exchange(in_value);
    return ((out_value && ((*out_value = std::get<0>(ret)), true)) || fibre::Codec<ODriveIntf::StreamProtocolType>::encode(std::get<0>(ret), output_buffer));
}



static inline bool fibre_property_odrive_can_error_readwrite_exchange(std::optional<Property<ODriveIntf::CanIntf::Error>> in_obj, std::optional<ODriveIntf::CanIntf::Error> in_value, ODriveIntf::CanIntf::Error* out_value, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<Property<ODriveIntf::CanIntf::Error>>::decode(input_buffer)).has_value())
                && (in_value.has_value() || (in_value = fibre::Codec<ODriveIntf::CanIntf::Error>::decode(input_buffer)).has_value() || true);
    if (!success) {
        return false;
    }
    std::tuple<ODriveIntf::CanIntf::Error> ret = (*in_obj)->exchange(in_value);
    return ((out_value && ((*out_value = std::get<0>(ret)), true)) || fibre::Codec<ODriveIntf::CanIntf::Error>::encode(std::get<0>(ret), output_buffer));
}



static inline bool fibre_property_endpoint_ref_readwrite_exchange(std::optional<Property<endpoint_ref_t>> in_obj, std::optional<endpoint_ref_t> in_value, endpoint_ref_t* out_value, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<Property<endpoint_ref_t>>::decode(input_buffer)).has_value())
                && (in_value.has_value() || (in_value = fibre::Codec<endpoint_ref_t>::decode(input_buffer)).has_value() || true);
    if (!success) {
        return false;
    }
    std::tuple<endpoint_ref_t> ret = (*in_obj)->exchange(in_value);
    return ((out_value && ((*out_value = std::get<0>(ret)), true)) || fibre::Codec<endpoint_ref_t>::encode(std::get<0>(ret), output_buffer));
}



static inline bool fibre_property_odrive_axis_error_readwrite_exchange(std::optional<Property<ODriveIntf::AxisIntf::Error>> in_obj, std::optional<ODriveIntf::AxisIntf::Error> in_value, ODriveIntf::AxisIntf::Error* out_value, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<Property<ODriveIntf::AxisIntf::Error>>::decode(input_buffer)).has_value())
                && (in_value.has_value() || (in_value = fibre::Codec<ODriveIntf::AxisIntf::Error>::decode(input_buffer)).has_value() || true);
    if (!success) {
        return false;
    }
    std::tuple<ODriveIntf::AxisIntf::Error> ret = (*in_obj)->exchange(in_value);
    return ((out_value && ((*out_value = std::get<0>(ret)), true)) || fibre::Codec<ODriveIntf::AxisIntf::Error>::encode(std::get<0>(ret), output_buffer));
}



static inline bool fibre_property_int64_readonly_read(std::optional<Property<const int64_t>> in_obj, int64_t* out_value, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<Property<const int64_t>>::decode(input_buffer)).has_value());
    if (!success) {
        return false;
    }
    std::tuple<int64_t> ret = (*in_obj)->read();
    return ((out_value && ((*out_value = std::get<0>(ret)), true)) || fibre::Codec<int64_t>::encode(std::get<0>(ret), output_buffer));
}



static inline bool fibre_property_odrive_axis_axis_state_readonly_read(std::optional<Property<const ODriveIntf::AxisIntf::AxisState>> in_obj, ODriveIntf::AxisIntf::AxisState* out_value, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<Property<const ODriveIntf::AxisIntf::AxisState>>::decode(input_buffer)).has_value());
    if (!success) {
        return false;
    }
    std::tuple<ODriveIntf::AxisIntf::AxisState> ret = (*in_obj)->read();
    return ((out_value && ((*out_value = std::get<0>(ret)), true)) || fibre::Codec<ODriveIntf::AxisIntf::AxisState>::encode(std::get<0>(ret), output_buffer));
}



static inline bool fibre_property_odrive_axis_axis_state_readwrite_exchange(std::optional<Property<ODriveIntf::AxisIntf::AxisState>> in_obj, std::optional<ODriveIntf::AxisIntf::AxisState> in_value, ODriveIntf::AxisIntf::AxisState* out_value, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<Property<ODriveIntf::AxisIntf::AxisState>>::decode(input_buffer)).has_value())
                && (in_value.has_value() || (in_value = fibre::Codec<ODriveIntf::AxisIntf::AxisState>::decode(input_buffer)).has_value() || true);
    if (!success) {
        return false;
    }
    std::tuple<ODriveIntf::AxisIntf::AxisState> ret = (*in_obj)->exchange(in_value);
    return ((out_value && ((*out_value = std::get<0>(ret)), true)) || fibre::Codec<ODriveIntf::AxisIntf::AxisState>::encode(std::get<0>(ret), output_buffer));
}



static inline bool fibre_property_odrive_motor_error_readwrite_exchange(std::optional<Property<ODriveIntf::MotorIntf::Error>> in_obj, std::optional<ODriveIntf::MotorIntf::Error> in_value, ODriveIntf::MotorIntf::Error* out_value, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<Property<ODriveIntf::MotorIntf::Error>>::decode(input_buffer)).has_value())
                && (in_value.has_value() || (in_value = fibre::Codec<ODriveIntf::MotorIntf::Error>::decode(input_buffer)).has_value() || true);
    if (!success) {
        return false;
    }
    std::tuple<ODriveIntf::MotorIntf::Error> ret = (*in_obj)->exchange(in_value);
    return ((out_value && ((*out_value = std::get<0>(ret)), true)) || fibre::Codec<ODriveIntf::MotorIntf::Error>::encode(std::get<0>(ret), output_buffer));
}



static inline bool fibre_property_odrive_controller_error_readwrite_exchange(std::optional<Property<ODriveIntf::ControllerIntf::Error>> in_obj, std::optional<ODriveIntf::ControllerIntf::Error> in_value, ODriveIntf::ControllerIntf::Error* out_value, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<Property<ODriveIntf::ControllerIntf::Error>>::decode(input_buffer)).has_value())
                && (in_value.has_value() || (in_value = fibre::Codec<ODriveIntf::ControllerIntf::Error>::decode(input_buffer)).has_value() || true);
    if (!success) {
        return false;
    }
    std::tuple<ODriveIntf::ControllerIntf::Error> ret = (*in_obj)->exchange(in_value);
    return ((out_value && ((*out_value = std::get<0>(ret)), true)) || fibre::Codec<ODriveIntf::ControllerIntf::Error>::encode(std::get<0>(ret), output_buffer));
}



static inline bool fibre_property_odrive_encoder_error_readwrite_exchange(std::optional<Property<ODriveIntf::EncoderIntf::Error>> in_obj, std::optional<ODriveIntf::EncoderIntf::Error> in_value, ODriveIntf::EncoderIntf::Error* out_value, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<Property<ODriveIntf::EncoderIntf::Error>>::decode(input_buffer)).has_value())
                && (in_value.has_value() || (in_value = fibre::Codec<ODriveIntf::EncoderIntf::Error>::decode(input_buffer)).has_value() || true);
    if (!success) {
        return false;
    }
    std::tuple<ODriveIntf::EncoderIntf::Error> ret = (*in_obj)->exchange(in_value);
    return ((out_value && ((*out_value = std::get<0>(ret)), true)) || fibre::Codec<ODriveIntf::EncoderIntf::Error>::encode(std::get<0>(ret), output_buffer));
}



static inline bool fibre_property_int32_readonly_read(std::optional<Property<const int32_t>> in_obj, int32_t* out_value, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<Property<const int32_t>>::decode(input_buffer)).has_value());
    if (!success) {
        return false;
    }
    std::tuple<int32_t> ret = (*in_obj)->read();
    return ((out_value && ((*out_value = std::get<0>(ret)), true)) || fibre::Codec<int32_t>::encode(std::get<0>(ret), output_buffer));
}



static inline bool fibre_property_int32_readwrite_exchange(std::optional<Property<int32_t>> in_obj, std::optional<int32_t> in_value, int32_t* out_value, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<Property<int32_t>>::decode(input_buffer)).has_value())
                && (in_value.has_value() || (in_value = fibre::Codec<int32_t>::decode(input_buffer)).has_value() || true);
    if (!success) {
        return false;
    }
    std::tuple<int32_t> ret = (*in_obj)->exchange(in_value);
    return ((out_value && ((*out_value = std::get<0>(ret)), true)) || fibre::Codec<int32_t>::encode(std::get<0>(ret), output_buffer));
}



static inline bool fibre_property_odrive_sensorless_estimator_error_readwrite_exchange(std::optional<Property<ODriveIntf::SensorlessEstimatorIntf::Error>> in_obj, std::optional<ODriveIntf::SensorlessEstimatorIntf::Error> in_value, ODriveIntf::SensorlessEstimatorIntf::Error* out_value, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<Property<ODriveIntf::SensorlessEstimatorIntf::Error>>::decode(input_buffer)).has_value())
                && (in_value.has_value() || (in_value = fibre::Codec<ODriveIntf::SensorlessEstimatorIntf::Error>::decode(input_buffer)).has_value() || true);
    if (!success) {
        return false;
    }
    std::tuple<ODriveIntf::SensorlessEstimatorIntf::Error> ret = (*in_obj)->exchange(in_value);
    return ((out_value && ((*out_value = std::get<0>(ret)), true)) || fibre::Codec<ODriveIntf::SensorlessEstimatorIntf::Error>::encode(std::get<0>(ret), output_buffer));
}



static inline bool fibre_property_odrive_can_protocol_readwrite_exchange(std::optional<Property<ODriveIntf::CanIntf::Protocol>> in_obj, std::optional<ODriveIntf::CanIntf::Protocol> in_value, ODriveIntf::CanIntf::Protocol* out_value, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<Property<ODriveIntf::CanIntf::Protocol>>::decode(input_buffer)).has_value())
                && (in_value.has_value() || (in_value = fibre::Codec<ODriveIntf::CanIntf::Protocol>::decode(input_buffer)).has_value() || true);
    if (!success) {
        return false;
    }
    std::tuple<ODriveIntf::CanIntf::Protocol> ret = (*in_obj)->exchange(in_value);
    return ((out_value && ((*out_value = std::get<0>(ret)), true)) || fibre::Codec<ODriveIntf::CanIntf::Protocol>::encode(std::get<0>(ret), output_buffer));
}



static inline bool fibre_property_uint16_readwrite_exchange(std::optional<Property<uint16_t>> in_obj, std::optional<uint16_t> in_value, uint16_t* out_value, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<Property<uint16_t>>::decode(input_buffer)).has_value())
                && (in_value.has_value() || (in_value = fibre::Codec<uint16_t>::decode(input_buffer)).has_value() || true);
    if (!success) {
        return false;
    }
    std::tuple<uint16_t> ret = (*in_obj)->exchange(in_value);
    return ((out_value && ((*out_value = std::get<0>(ret)), true)) || fibre::Codec<uint16_t>::encode(std::get<0>(ret), output_buffer));
}



static inline bool fibre_property_odrive_motor_motor_type_readwrite_exchange(std::optional<Property<ODriveIntf::MotorIntf::MotorType>> in_obj, std::optional<ODriveIntf::MotorIntf::MotorType> in_value, ODriveIntf::MotorIntf::MotorType* out_value, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<Property<ODriveIntf::MotorIntf::MotorType>>::decode(input_buffer)).has_value())
                && (in_value.has_value() || (in_value = fibre::Codec<ODriveIntf::MotorIntf::MotorType>::decode(input_buffer)).has_value() || true);
    if (!success) {
        return false;
    }
    std::tuple<ODriveIntf::MotorIntf::MotorType> ret = (*in_obj)->exchange(in_value);
    return ((out_value && ((*out_value = std::get<0>(ret)), true)) || fibre::Codec<ODriveIntf::MotorIntf::MotorType>::encode(std::get<0>(ret), output_buffer));
}



static inline bool fibre_property_odrive_controller_control_mode_readwrite_exchange(std::optional<Property<ODriveIntf::ControllerIntf::ControlMode>> in_obj, std::optional<ODriveIntf::ControllerIntf::ControlMode> in_value, ODriveIntf::ControllerIntf::ControlMode* out_value, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<Property<ODriveIntf::ControllerIntf::ControlMode>>::decode(input_buffer)).has_value())
                && (in_value.has_value() || (in_value = fibre::Codec<ODriveIntf::ControllerIntf::ControlMode>::decode(input_buffer)).has_value() || true);
    if (!success) {
        return false;
    }
    std::tuple<ODriveIntf::ControllerIntf::ControlMode> ret = (*in_obj)->exchange(in_value);
    return ((out_value && ((*out_value = std::get<0>(ret)), true)) || fibre::Codec<ODriveIntf::ControllerIntf::ControlMode>::encode(std::get<0>(ret), output_buffer));
}



static inline bool fibre_property_odrive_controller_input_mode_readwrite_exchange(std::optional<Property<ODriveIntf::ControllerIntf::InputMode>> in_obj, std::optional<ODriveIntf::ControllerIntf::InputMode> in_value, ODriveIntf::ControllerIntf::InputMode* out_value, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<Property<ODriveIntf::ControllerIntf::InputMode>>::decode(input_buffer)).has_value())
                && (in_value.has_value() || (in_value = fibre::Codec<ODriveIntf::ControllerIntf::InputMode>::decode(input_buffer)).has_value() || true);
    if (!success) {
        return false;
    }
    std::tuple<ODriveIntf::ControllerIntf::InputMode> ret = (*in_obj)->exchange(in_value);
    return ((out_value && ((*out_value = std::get<0>(ret)), true)) || fibre::Codec<ODriveIntf::ControllerIntf::InputMode>::encode(std::get<0>(ret), output_buffer));
}



static inline bool fibre_property_uint8_readwrite_exchange(std::optional<Property<uint8_t>> in_obj, std::optional<uint8_t> in_value, uint8_t* out_value, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<Property<uint8_t>>::decode(input_buffer)).has_value())
                && (in_value.has_value() || (in_value = fibre::Codec<uint8_t>::decode(input_buffer)).has_value() || true);
    if (!success) {
        return false;
    }
    std::tuple<uint8_t> ret = (*in_obj)->exchange(in_value);
    return ((out_value && ((*out_value = std::get<0>(ret)), true)) || fibre::Codec<uint8_t>::encode(std::get<0>(ret), output_buffer));
}



static inline bool fibre_property_odrive_encoder_mode_readwrite_exchange(std::optional<Property<ODriveIntf::EncoderIntf::Mode>> in_obj, std::optional<ODriveIntf::EncoderIntf::Mode> in_value, ODriveIntf::EncoderIntf::Mode* out_value, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<Property<ODriveIntf::EncoderIntf::Mode>>::decode(input_buffer)).has_value())
                && (in_value.has_value() || (in_value = fibre::Codec<ODriveIntf::EncoderIntf::Mode>::decode(input_buffer)).has_value() || true);
    if (!success) {
        return false;
    }
    std::tuple<ODriveIntf::EncoderIntf::Mode> ret = (*in_obj)->exchange(in_value);
    return ((out_value && ((*out_value = std::get<0>(ret)), true)) || fibre::Codec<ODriveIntf::EncoderIntf::Mode>::encode(std::get<0>(ret), output_buffer));
}



static inline bool fibre_property_odrive_gpio_mode_readwrite_exchange(std::optional<Property<ODriveIntf::GpioMode>> in_obj, std::optional<ODriveIntf::GpioMode> in_value, ODriveIntf::GpioMode* out_value, fibre::cbufptr_t* input_buffer, fibre::bufptr_t* output_buffer) {
    bool success = (in_obj.has_value() || (in_obj = fibre::Codec<Property<ODriveIntf::GpioMode>>::decode(input_buffer)).has_value())
                && (in_value.has_value() || (in_value = fibre::Codec<ODriveIntf::GpioMode>::decode(input_buffer)).has_value() || true);
    if (!success) {
        return false;
    }
    std::tuple<ODriveIntf::GpioMode> ret = (*in_obj)->exchange(in_value);
    return ((out_value && ((*out_value = std::get<0>(ret)), true)) || fibre::Codec<ODriveIntf::GpioMode>::encode(std::get<0>(ret), output_buffer));
}


