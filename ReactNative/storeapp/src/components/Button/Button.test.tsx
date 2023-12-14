import React from 'react';
import {fireEvent, render} from '@testing-library/react-native';
import Button from './Button';
import styles from './Button.style';
//npm test
//npm test -u
//npm test -- --watch
//npm test -- -u
//npm test -- --coverage
test('', () => {
  const component = render(<Button onPress={undefined} />);
  expect(component).toMatchSnapshot();
});

test('should render button with onPress', () => {
  const mockFn = jest.fn();
  const component = render(<Button onPress={mockFn} />);
  const button = component.getByTestId('button');
  fireEvent(button, 'press');
  expect(mockFn).toHaveBeenCalled();
});

test('should render button with default theme as primary', () => {
  const theme = 'primary';
  const component = render(<Button onPress={undefined} />);
  const button = component.getByTestId('button');
  expect(button.props.style).toMatchObject(styles.primary.container);
});

test('should render button with theme as primary', () => {
  const theme = 'primary';
  const component = render(<Button onPress={undefined} theme={theme} />);
  const button = component.getByTestId('button');
  expect(button.props.style).toMatchObject(styles[theme].container);
});

test('should render button with theme as secondary', () => {
  const theme = 'secondary';
  const component = render(<Button onPress={undefined} theme={theme} />);
  const button = component.getByTestId('button');
  expect(button.props.style).toMatchObject(styles[theme].container);
});
