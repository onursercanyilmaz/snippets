import {View, Text, Touchable, TouchableOpacity} from 'react-native';
import React from 'react';
import styles from './Button.style';
export default function Button() {
  return (
    <TouchableOpacity
      style={styles.container}
      onPress={() => console.log('Button pressed')}>
      <Text style={styles.label}>Button</Text>
    </TouchableOpacity>
  );
}
