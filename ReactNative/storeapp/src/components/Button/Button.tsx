import {
  View,
  Text,
  Touchable,
  TouchableOpacity,
  ActivityIndicator,
} from 'react-native';
import React from 'react';
import styles from './Button.style';

interface ButtonProps {
  onPress: (() => void) | undefined;
}
export default function Button(props: ButtonProps) {
  return (
    <TouchableOpacity
      style={styles.container}
      onPress={props.onPress}
      testID='button'
    >
      <Text style={styles.label}>Login</Text>
    </TouchableOpacity>
  );
}
