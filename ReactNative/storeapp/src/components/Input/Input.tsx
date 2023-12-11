import {View, Text, TextInput} from 'react-native';
import React from 'react';
import styles from './Input.styles';

interface InputProps {
  value: string | undefined;
  id: string | undefined;
  onChangeText: ((text: string) => void) | undefined;
  secureTextEntry: boolean | undefined;
  placeholder: string | undefined;
  label: string;
}

export default function Input(props: InputProps) {
  return (
    <View style={styles.container}>
      <Text style={styles.label}>{props.label}</Text>
      <TextInput
        value={props.value}
        id={props.id}
        placeholder={props.placeholder}
        style={styles.textInput}
        secureTextEntry={props.secureTextEntry}
        onChangeText={props.onChangeText}
      />
    </View>
  );
}
