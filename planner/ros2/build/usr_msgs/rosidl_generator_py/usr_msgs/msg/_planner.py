# generated from rosidl_generator_py/resource/_idl.py.em
# with input from usr_msgs:msg/Planner.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Planner(type):
    """Metaclass of message 'Planner'."""

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
                'usr_msgs.msg.Planner')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__planner
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__planner
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__planner
            cls._TYPE_SUPPORT = module.type_support_msg__msg__planner
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__planner

            from usr_msgs.msg import LandMark
            if LandMark.__class__._TYPE_SUPPORT is None:
                LandMark.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Planner(metaclass=Metaclass_Planner):
    """Message class 'Planner'."""

    __slots__ = [
        '_land_marks',
        '_distance',
        '_duration',
        '_difficulty',
    ]

    _fields_and_field_types = {
        'land_marks': 'sequence<usr_msgs/LandMark>',
        'distance': 'float',
        'duration': 'float',
        'difficulty': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['usr_msgs', 'msg'], 'LandMark')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.land_marks = kwargs.get('land_marks', [])
        self.distance = kwargs.get('distance', float())
        self.duration = kwargs.get('duration', float())
        self.difficulty = kwargs.get('difficulty', float())

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
        if self.land_marks != other.land_marks:
            return False
        if self.distance != other.distance:
            return False
        if self.duration != other.duration:
            return False
        if self.difficulty != other.difficulty:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def land_marks(self):
        """Message field 'land_marks'."""
        return self._land_marks

    @land_marks.setter
    def land_marks(self, value):
        if __debug__:
            from usr_msgs.msg import LandMark
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, LandMark) for v in value) and
                 True), \
                "The 'land_marks' field must be a set or sequence and each value of type 'LandMark'"
        self._land_marks = value

    @property
    def distance(self):
        """Message field 'distance'."""
        return self._distance

    @distance.setter
    def distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance' field must be of type 'float'"
        self._distance = value

    @property
    def duration(self):
        """Message field 'duration'."""
        return self._duration

    @duration.setter
    def duration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'duration' field must be of type 'float'"
        self._duration = value

    @property
    def difficulty(self):
        """Message field 'difficulty'."""
        return self._difficulty

    @difficulty.setter
    def difficulty(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'difficulty' field must be of type 'float'"
        self._difficulty = value
