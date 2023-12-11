import {View, Text, Image, KeyboardAvoidingView, Platform} from 'react-native';
import React from 'react';
import {SafeAreaView} from 'react-native-safe-area-context';
import styles from './LoginPage.style';
import Config from 'react-native-config';
import Input from '../../components/Input/Input';
import Button from '../../components/Button/Button';
import {Formik} from 'formik';
import * as Yup from 'yup';
import usePost from '../../hooks/usePost/usePost';
import {ActivityIndicator} from 'react-native';

export default function LoginPage() {
  const {data, loading, error, post} = usePost();

  const validationSchema = Yup.object().shape({
    username: Yup.string().required('Username is required'),
    password: Yup.string().required('Password is required'),
  });

  const handleLogin = (values: any) => {
    post(Config.AUTH_URL, values);
  };

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

      <Formik
        validationSchema={validationSchema}
        initialValues={{username: '', password: ''}}
        onSubmit={values => handleLogin(values)}>
        {({
          handleChange,
          handleBlur,
          handleSubmit,
          values,
          touched,
          errors,
        }) => (
          <>
            <View style={styles.middleContainer}>
              <Input
                placeholder={'Username'}
                label={'Username'}
                secureTextEntry={false}
                onChangeText={handleChange('username')}
                value={values.username}
                id={'username'}
              />
              {touched.username && errors.username && (
                <Text style={styles.errorText}>{errors.username}</Text>
              )}

              <Input
                placeholder={'Password'}
                label={'Password'}
                secureTextEntry={true}
                onChangeText={handleChange('password')}
                value={values.password}
                id={'password'}
              />
              {touched.password && errors.password && (
                <Text style={styles.errorText}>{errors.password}</Text>
              )}
            </View>

            {error && (
              <Text style={styles.errorText}>
                {error.response.status} - {error.response.data}
              </Text>
            )}
            {loading === true ? (
              <View style={styles.bottomContainer}>
                <ActivityIndicator color="white" />
              </View>
            ) : (
              <View style={styles.bottomContainer}>
                <Button onPress={handleSubmit} />
              </View>
            )}
          </>
        )}
      </Formik>
    </SafeAreaView>
  );
}
