import * as React from 'react';
import {Button, Text, View} from 'react-native';

interface ProfilePAgeProps {
  navigation: any;
}

export default function ProfilePage(props: ProfilePAgeProps) {
  return (
    <View style={{flex: 1, justifyContent: 'center', alignItems: 'center'}}>
      <Text>Profile screen</Text>
      <Button
        title="Go to User Detail"
        onPress={() => props.navigation.navigate('UserDetail')}
      />
    </View>
  );
}
