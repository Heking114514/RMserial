# generated from rosidl_generator_py/resource/_idl.py.em
# with input from def_msg:msg/GobalInformation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GobalInformation(type):
    """Metaclass of message 'GobalInformation'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('def_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'def_msg.msg.GobalInformation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gobal_information
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gobal_information
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gobal_information
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gobal_information
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gobal_information

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GobalInformation(metaclass=Metaclass_GobalInformation):
    """Message class 'GobalInformation'."""

    __slots__ = [
        '_header',
        '_battery',
        '_life_extra',
        '_color',
        '_bullet_extra',
        '_fault_flag',
        '_launch',
        '_arm',
        '_base_hp_our',
        '_base_hp_enemy',
        '_judge_warning',
        '_stage_remain_time',
        '_game_progress',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'battery': 'float',
        'life_extra': 'float',
        'color': 'float',
        'bullet_extra': 'float',
        'fault_flag': 'float',
        'launch': 'boolean',
        'arm': 'boolean',
        'base_hp_our': 'float',
        'base_hp_enemy': 'float',
        'judge_warning': 'float',
        'stage_remain_time': 'float',
        'game_progress': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.battery = kwargs.get('battery', float())
        self.life_extra = kwargs.get('life_extra', float())
        self.color = kwargs.get('color', float())
        self.bullet_extra = kwargs.get('bullet_extra', float())
        self.fault_flag = kwargs.get('fault_flag', float())
        self.launch = kwargs.get('launch', bool())
        self.arm = kwargs.get('arm', bool())
        self.base_hp_our = kwargs.get('base_hp_our', float())
        self.base_hp_enemy = kwargs.get('base_hp_enemy', float())
        self.judge_warning = kwargs.get('judge_warning', float())
        self.stage_remain_time = kwargs.get('stage_remain_time', float())
        self.game_progress = kwargs.get('game_progress', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.battery != other.battery:
            return False
        if self.life_extra != other.life_extra:
            return False
        if self.color != other.color:
            return False
        if self.bullet_extra != other.bullet_extra:
            return False
        if self.fault_flag != other.fault_flag:
            return False
        if self.launch != other.launch:
            return False
        if self.arm != other.arm:
            return False
        if self.base_hp_our != other.base_hp_our:
            return False
        if self.base_hp_enemy != other.base_hp_enemy:
            return False
        if self.judge_warning != other.judge_warning:
            return False
        if self.stage_remain_time != other.stage_remain_time:
            return False
        if self.game_progress != other.game_progress:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def battery(self):
        """Message field 'battery'."""
        return self._battery

    @battery.setter
    def battery(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery = value

    @builtins.property
    def life_extra(self):
        """Message field 'life_extra'."""
        return self._life_extra

    @life_extra.setter
    def life_extra(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'life_extra' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'life_extra' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._life_extra = value

    @builtins.property
    def color(self):
        """Message field 'color'."""
        return self._color

    @color.setter
    def color(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'color' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'color' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._color = value

    @builtins.property
    def bullet_extra(self):
        """Message field 'bullet_extra'."""
        return self._bullet_extra

    @bullet_extra.setter
    def bullet_extra(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bullet_extra' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'bullet_extra' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._bullet_extra = value

    @builtins.property
    def fault_flag(self):
        """Message field 'fault_flag'."""
        return self._fault_flag

    @fault_flag.setter
    def fault_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fault_flag' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fault_flag' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fault_flag = value

    @builtins.property
    def launch(self):
        """Message field 'launch'."""
        return self._launch

    @launch.setter
    def launch(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'launch' field must be of type 'bool'"
        self._launch = value

    @builtins.property
    def arm(self):
        """Message field 'arm'."""
        return self._arm

    @arm.setter
    def arm(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'arm' field must be of type 'bool'"
        self._arm = value

    @builtins.property
    def base_hp_our(self):
        """Message field 'base_hp_our'."""
        return self._base_hp_our

    @base_hp_our.setter
    def base_hp_our(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'base_hp_our' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'base_hp_our' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._base_hp_our = value

    @builtins.property
    def base_hp_enemy(self):
        """Message field 'base_hp_enemy'."""
        return self._base_hp_enemy

    @base_hp_enemy.setter
    def base_hp_enemy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'base_hp_enemy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'base_hp_enemy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._base_hp_enemy = value

    @builtins.property
    def judge_warning(self):
        """Message field 'judge_warning'."""
        return self._judge_warning

    @judge_warning.setter
    def judge_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'judge_warning' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'judge_warning' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._judge_warning = value

    @builtins.property
    def stage_remain_time(self):
        """Message field 'stage_remain_time'."""
        return self._stage_remain_time

    @stage_remain_time.setter
    def stage_remain_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'stage_remain_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'stage_remain_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._stage_remain_time = value

    @builtins.property
    def game_progress(self):
        """Message field 'game_progress'."""
        return self._game_progress

    @game_progress.setter
    def game_progress(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'game_progress' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'game_progress' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._game_progress = value
