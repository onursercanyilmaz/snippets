import {View, Text, Image, KeyboardAvoidingView, Platform} from 'react-native';
import React from 'react';
import {SafeAreaView} from 'react-native-safe-area-context';
import styles from './LoginPage.style';
import Config from 'react-native-config';
import Input from '../../components/Input/Input';
import Button from '../../components/Button/Button';

export default function LoginPage() {
  return (
    <SafeAreaView style={styles.container}>
      <View style={styles.topContainer}>
        <Image
          style={styles.logo}
          source={{
            uri: Config.LOGO_URL,
          }}
        />
      </View>
      <KeyboardAvoidingView
        behavior={Platform.OS === 'android' ? 'padding' : 'height'}
        style={styles.middleContainer}>
        <Input
          placeholder={'Username'}
          label={'Username'}
          secureTextEntry={false}
          onChangeText={undefined}
        />
        <Input
          placeholder={'Password'}
          label={'Password'}
          secureTextEntry={true}
          onChangeText={undefined}
        />
      </KeyboardAvoidingView>
      <View style={styles.bottomContainer}>
        <Button />
      </View>
    </SafeAreaView>
  );
}
