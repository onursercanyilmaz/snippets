import {
  View,
  Text,
  Touchable,
  TouchableOpacity,
  ActivityIndicator,
} from 'react-native';
import React from 'react';
import styles from './Button.style';

type Theme = 'primary' | 'secondary'; // Add this line

interface ButtonProps {
  onPress: (() => void) | undefined;
  theme?: Theme;
}
export default function Button({onPress, theme = 'primary'}: ButtonProps) {
  return (
    <TouchableOpacity
      style={styles[theme].container}
      onPress={onPress}
      testID='button'
    >
      <Text style={styles[theme].label}>Login</Text>
    </TouchableOpacity>
  );
}
