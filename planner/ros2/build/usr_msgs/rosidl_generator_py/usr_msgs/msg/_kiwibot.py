# generated from rosidl_generator_py/resource/_idl.py.em
# with input from usr_msgs:msg/Kiwibot.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Kiwibot(type):
    """Metaclass of message 'Kiwibot'."""

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
            module = import_type_support('usr_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'usr_msgs.msg.Kiwibot')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__kiwibot
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__kiwibot
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__kiwibot
            cls._TYPE_SUPPORT = module.type_support_msg__msg__kiwibot
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__kiwibot

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Kiwibot(metaclass=Metaclass_Kiwibot):
    """Message class 'Kiwibot'."""

    __slots__ = [
        '_pos_x',
        '_pos_y',
        '_dist',
        '_speed',
        '_time',
        '_yaw',
        '_moving',
    ]

    _fields_and_field_types = {
        'pos_x': 'int16',
        'pos_y': 'int16',
        'dist': 'float',
        'speed': 'float',
        'time': 'float',
        'yaw': 'float',
        'moving': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pos_x = kwargs.get('pos_x', int())
        self.pos_y = kwargs.get('pos_y', int())
        self.dist = kwargs.get('dist', float())
        self.speed = kwargs.get('speed', float())
        self.time = kwargs.get('time', float())
        self.yaw = kwargs.get('yaw', float())
        self.moving = kwargs.get('moving', bool())

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
        if self.pos_x != other.pos_x:
            return False
        if self.pos_y != other.pos_y:
            return False
        if self.dist != other.dist:
            return False
        if self.speed != other.speed:
            return False
        if self.time != other.time:
            return False
        if self.yaw != other.yaw:
            return False
        if self.moving != other.moving:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def pos_x(self):
        """Message field 'pos_x'."""
        return self._pos_x

    @pos_x.setter
    def pos_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pos_x' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'pos_x' field must be an integer in [-32768, 32767]"
        self._pos_x = value

    @property
    def pos_y(self):
        """Message field 'pos_y'."""
        return self._pos_y

    @pos_y.setter
    def pos_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pos_y' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'pos_y' field must be an integer in [-32768, 32767]"
        self._pos_y = value

    @property
    def dist(self):
        """Message field 'dist'."""
        return self._dist

    @dist.setter
    def dist(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dist' field must be of type 'float'"
        self._dist = value

    @property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
        self._speed = value

    @property
    def time(self):
        """Message field 'time'."""
        return self._time

    @time.setter
    def time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time' field must be of type 'float'"
        self._time = value

    @property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
        self._yaw = value

    @property
    def moving(self):
        """Message field 'moving'."""
        return self._moving

    @moving.setter
    def moving(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'moving' field must be of type 'bool'"
        self._moving = value
